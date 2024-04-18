#include "withdrawmoneywindow.h"
#include "ui_withdrawmoneywindow.h"


WithdrawMoneyWindow::WithdrawMoneyWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WithdrawMoneyWindow)
{
    ui->setupUi(this);
    qDebug() << "Withdraw Money Constructor" ;

    accId = "1";

    //timer = new QTimer(this);
    //timer->setInterval(10000);
    //connect(timer, SIGNAL(timeout()), this, SLOT(close()));
    //timer->start();
}

WithdrawMoneyWindow::~WithdrawMoneyWindow()
{
    delete ui;
    qDebug() << "Withdraw Money Destructor" ;
    //delete timer;
}

void WithdrawMoneyWindow::on_btn_withdraw_20_clicked()
{
    //timer->start();
    qDebug() << "btn_withdraw_20_clicked" ;
    withDrawAmount = "20";
    QJsonObject jsonObj;
    jsonObj.insert("idaccount", accId);
    jsonObj.insert("saldo", withDrawAmount);


    QString site_url = "http://localhost:3000/account/Nosto/" + accId + "/" + withDrawAmount;
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //webtoken tähän alas
    //QByteArray myToken = "Bearer " +webToken;
    //request.setRawHeader(QByteArray("Authorization"),(myToken));

    putManager = new QNetworkAccessManager(this);
    connect(putManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateBalanceSLotW(QNetworkReply*)));

    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());

}


void WithdrawMoneyWindow::on_btn_withdraw_40_clicked()
{
    //timer->start();
    qDebug() << "btn_withdraw_40_clicked" ;
    withDrawAmount = "40";
    QJsonObject jsonObj;
    jsonObj.insert("idaccount", accId);
    jsonObj.insert("saldo", withDrawAmount);


    QString site_url = "http://localhost:3000/account/Nosto/" + accId + "/" + withDrawAmount;
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //webtoken tähän alas
    //QByteArray myToken = "Bearer " +webToken;
    //request.setRawHeader(QByteArray("Authorization"),(myToken));

    putManager = new QNetworkAccessManager(this);
    connect(putManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateBalanceSLotW(QNetworkReply*)));

    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());

}


void WithdrawMoneyWindow::on_btn_withdraw_60_clicked()
{
    //timer->start();

    qDebug() << "btn_withdraw_60_clicked" ;
    withDrawAmount = "60";
    QJsonObject jsonObj;
    jsonObj.insert("idaccount", accId);
    jsonObj.insert("saldo", withDrawAmount);


    QString site_url = "http://localhost:3000/account/Nosto/" + accId + "/" + withDrawAmount;
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //webtoken tähän alas
    //QByteArray myToken = "Bearer " +webToken;
    //request.setRawHeader(QByteArray("Authorization"),(myToken));

    putManager = new QNetworkAccessManager(this);
    connect(putManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateBalanceSLotW(QNetworkReply*)));

    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());

}


void WithdrawMoneyWindow::on_btn_withdraw_100_clicked()
{
    //timer->start();

    qDebug() << "btn_withdraw_100_clicked" ;
    withDrawAmount = "100";
    QJsonObject jsonObj;
    jsonObj.insert("idaccount", accId);
    jsonObj.insert("saldo", withDrawAmount);


    QString site_url = "http://localhost:3000/account/Nosto/" + accId + "/" + withDrawAmount;
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //webtoken tähän alas
    //QByteArray myToken = "Bearer " +webToken;
    //request.setRawHeader(QByteArray("Authorization"),(myToken));

    putManager = new QNetworkAccessManager(this);
    connect(putManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateBalanceSLotW(QNetworkReply*)));

    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());

}


void WithdrawMoneyWindow::on_btn_withdraw_200_clicked()
{
    //timer->start();

    qDebug() << "btn_withdraw_200_clicked" ;
    withDrawAmount = "200";
    QJsonObject jsonObj;
    jsonObj.insert("idaccount", accId);
    jsonObj.insert("saldo", withDrawAmount);


    QString site_url = "http://localhost:3000/account/Nosto/" + accId + "/" + withDrawAmount;
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //webtoken tähän alas
    //QByteArray myToken = "Bearer " +webToken;
    //request.setRawHeader(QByteArray("Authorization"),(myToken));

    putManager = new QNetworkAccessManager(this);
    connect(putManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateBalanceSLotW(QNetworkReply*)));

    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());

}


void WithdrawMoneyWindow::on_btn_withdraw_500_clicked()
{
    //timer->start();

    qDebug() << "btn_withdraw_500_clicked" ;
    withDrawAmount = "500";
    QJsonObject jsonObj;
    jsonObj.insert("idaccount", accId);
    jsonObj.insert("saldo", withDrawAmount);


    QString site_url = "http://localhost:3000/account/Nosto/" + accId + "/" + withDrawAmount;
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //webtoken tähän alas
    //QByteArray myToken = "Bearer " +webToken;
    //request.setRawHeader(QByteArray("Authorization"),(myToken));

    putManager = new QNetworkAccessManager(this);
    connect(putManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateBalanceSLotW(QNetworkReply*)));

    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());

}


void WithdrawMoneyWindow::on_btn_withdraw_return_clicked()
{
    qDebug() << "btn_withdraw_return_clicked" ;
    close();
    deleteLater();
}

void WithdrawMoneyWindow::updateBalanceSLotW(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug() << "data withdraw: " << response_data;
    //QMessageBox msgBox;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(response_data);
    QJsonObject jsonObj = jsonDoc.object();
    if(response_data == "-4078"){
        qDebug() << "Tietokantaan ei yhteyttä";
        ui->label_withDraw->setText("Tietokantaan ei yhteyttä");

        //msgBox.setText("Tietokantaan ei yhteyttä");
        //QTimer::singleShot(10000, &msgBox, &QMessageBox::close);
        //msgBox.exec();
    }
    else if(jsonObj["affectedRows"].toInt() == 0) {
        qDebug()<< "vähän rahaa tilillä";
        ui->label_withDraw->setText("Tilillä ei ole tarpeeksi rahaa");

        //msgBox.setText("Tilillä ei ole tarpeeksi rahaa");
        //QTimer::singleShot(10000, &msgBox, &QMessageBox::close);
        //msgBox.exec();

    }
    else if(jsonObj["affectedRows"].toInt() == 1){
        qDebug()<< "nostettu: " << withDrawAmount;
        ui->label_withDraw->setText("Nostetaan " +withDrawAmount +"e");

        //msgBox.setText("Nostetaan " +withDrawAmount +"e");
        //QTimer::singleShot(10000, &msgBox, &QMessageBox::close);
        //msgBox.exec();

    }
    reply->deleteLater();
    putManager->deleteLater();
    //timer->stop();
    //timer->deleteLater();
    //deleteLater();

}

