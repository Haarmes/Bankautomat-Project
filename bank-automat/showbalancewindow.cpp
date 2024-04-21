#include "showbalancewindow.h"
#include "ui_showbalancewindow.h"


ShowBalanceWindow::ShowBalanceWindow(QWidget *parent, const QString token, const QString id)
    : QDialog(parent)
    , ui(new Ui::ShowBalanceWindow)
{
    ui->setupUi(this);
    qDebug() << "showBalanceWindow constructed";
    webToken=token;
    userId=id;

    QString site_url = "http://localhost:3306/saldo/" + userId + "/transactions?limit=5";
    QNetworkRequest request(site_url);

    QByteArray myToken = "Bearer " + webToken.toUtf8();
    request.setRawHeader(QByteArray("Authorization"), myToken);

    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(getUserInfoSlot(QNetworkReply*)));

    reply = getManager->get(request);

    // Create the model for the table view
    model = new QStandardItemModel(0, 2, this);
    model->setHorizontalHeaderLabels(QStringList() << "Päivämäärä" << "Määrä");
    ui->tableView->setModel(model);

}

ShowBalanceWindow::~ShowBalanceWindow()
{

    // Cleanup tasks
    delete ui;
    delete reply;
    delete getManager;
    delete model;
    qDebug()<<"ShowBalance destructed";

}

void ShowBalanceWindow::getUserInfoSlot(QNetworkReply *reply)
{
    response_data = reply->readAll();
        qDebug() << "DATA: " << response_data;

        // Parse JSON response
        QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
        QJsonArray json_array = json_doc.array();

        // Populate the model with transaction data
        foreach(const QJsonValue &value, json_array)
        {
            QJsonObject transaction = value.toObject();
            QString date = transaction["date"].toString();
            QString amount = transaction["amount"].toString();

            QList<QStandardItem *> rowItems;
            rowItems.append(new QStandardItem(date));
            rowItems.append(new QStandardItem(amount));

            model->appendRow(rowItems);
        }

        // Clean up
        reply->deleteLater();
        getManager->deleteLater();
    }





