#include "showbalancewindow.h"
#include "ui_showbalancewindow.h"


ShowBalanceWindow::ShowBalanceWindow(QWidget *parent, const QString token, const QString id)
    : QDialog(parent)
    , ui(new Ui::ShowBalanceWindow)
{
    ui->setupUi(this);
    qDebug() << "showBalanceWindow constructed";
    webToken = token;
    userId = id;

    // Construct the URL for retrieving transactions
    QString site_url = "http://localhost:3306/saldo/" + userId + "/transactions?limit=5";
    QNetworkRequest request(site_url);

    // Set the authorization token in the request header
    QByteArray myToken = "Bearer " + webToken.toUtf8();
    request.setRawHeader(QByteArray("Authorization"), myToken);

    // Initialize network manager and connect signal to slot for handling reply
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(getUserInfoSlot(QNetworkReply*)));

    // Send GET request to retrieve user info and transactions
    reply = getManager->get(request);

    // Setup the table view model
    model = new QStandardItemModel(0, 3, this);
    model->setHeaderData(0, Qt::Horizontal, "Date");
    model->setHeaderData(1, Qt::Horizontal, "Amount");
    model->setHeaderData(2, Qt::Horizontal, "Type");

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
    // Read response data
    response_data = reply->readAll();
    qDebug() << "DATA: " << response_data;

    // Parse JSON response
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonObject json_obj = json_doc.object();

    // Extract user information
    QString firstName = json_obj["first_name"].toString();
    QString lastName = json_obj["last_name"].toString();
    QString balance = json_obj["balance"].toString();

    // Extract latest transactions
    QJsonArray transactionsArray = json_obj["transactions"].toArray();
    setTransactions(transactionsArray);

    // Update UI with user information
    ui->nameLabel->setText(firstName + " " + lastName);
    ui->saldoLabel->setText(balance);
}

void ShowBalanceWindow::setTransactions(const QJsonArray &transactionsArray)
{
    // Clear existing data in the table view model
    model->removeRows(0, model->rowCount());

    // Populate the table view model with transactions data
    for (int i = 0; i < transactionsArray.size(); ++i) {
        QJsonObject transaction = transactionsArray[i].toObject();
        QString date = transaction["date"].toString();
        QString amount = transaction["amount"].toString();
        QString type = transaction["type"].toString();

        // Create row items for each transaction
        QList<QStandardItem *> rowItems;
        rowItems << new QStandardItem(date);
        rowItems << new QStandardItem(amount);
        rowItems << new QStandardItem(type);

        // Append the row to the table view model
        model->appendRow(rowItems);
        }
}





