#include "transactionwindow.h"
#include "ui_transactionwindow.h"
#include <string>

TransactionWindow::TransactionWindow(QWidget *parent, QString token)
    : QDialog(parent)
    , ui(new Ui::TransactionWindow)
{
    ui->setupUi(this);
    qDebug() << "TransactionWindow Constructed";
    webToken = token;

    model->setRowCount(10); // 10 rows
    model->setColumnCount(2); // 2 columns (amount, date)
    model->setHeaderData(0, Qt::Horizontal, "Päivämäärä");
    model->setHeaderData(1, Qt::Horizontal, "Määrä");

    ui->transactionTableView->setModel(model);

    getTransactionsByOffset();
}

TransactionWindow::~TransactionWindow()
{
    delete ui;
    delete model;
    delete reply;
    delete getManager;
    qDebug() << "TransactionWindow Destructed";
}

// Getting the transactions by URL

void TransactionWindow::getTransactionsByOffset(void)
{
    // Tee iduser automaattisesti lisättäväksi!
    QString site_url = "http://localhost:3000/transaction/history/1?offset=" + offsetString;
    QNetworkRequest request(site_url);


    QByteArray myToken="Bearer "+webToken.toUtf8();
    request.setRawHeader(QByteArray("Authorization"),(myToken));


    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(getTransactionSlot(QNetworkReply*)));
    reply = getManager->get(request);
}

// Filling the transactionArr here

void TransactionWindow::getTransactionSlot(QNetworkReply *reply)
{
    int i = 0;

    response_data = reply->readAll();
    qDebug() << "DATA: " + response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();

    foreach(const QJsonValue &value, json_array)
    {
        QJsonObject json_obj = value.toObject();
        transactionArr[i++] = json_obj["Tapahtuma aika"].toString();
        transactionArr[i++] = json_obj["Summa"].toString();
    }

    setTransactions(); // Pasting the transactionArr to transactionTableView
}

void TransactionWindow::setTransactions(void)
{
    int z = 0; // transactionArr length

    for(int i = 0; i < 10; i++) // rows of transactionTableView
    {
        for(int j = 0; j < 2; j++) // columns -||-
        {
            model->setItem(i, j, new QStandardItem(transactionArr[z++]));
        }
    }

    for(int i = 0; i < 20; i++) // emptying transactionArr
    {
        transactionArr[i] = "";
    }
}

// BUTTON HANDLING

void TransactionWindow::on_btnNewer_clicked()
{
    if((offsetString.toInt() - 10) >= 0)
    {
        int offset = offsetString.toInt() - 10; // decreasing offset by 10
        qDebug() << "offsetvalue: " + QString::number(offset);
        offsetString = QString::number(offset);
    }

    getTransactionsByOffset();
}

void TransactionWindow::on_btnOlder_clicked()
{
    int offset = offsetString.toInt() + 10; // adding offset by 10
    qDebug() << "offsetvalue: " + QString::number(offset);
    offsetString = QString::number(offset);

    getTransactionsByOffset();
}

