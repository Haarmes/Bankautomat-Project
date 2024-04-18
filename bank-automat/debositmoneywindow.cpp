#include "debositmoneywindow.h"
#include "ui_debositmoneywindow.h"


DebositMoneyWindow::DebositMoneyWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DebositMoneyWindow)
{
    ui->setupUi(this);
    qDebug() << "Deposit Money Constructor" ;

    accId = "1";

    //timer = new QTimer(this);
    //timer->setInterval(10000);
    //connect(timer, SIGNAL(timeout()), this, SLOT(close()));
    //timer->start();

}

DebositMoneyWindow::~DebositMoneyWindow()
{
    delete ui;
    qDebug() << "Deposit Money Destructor" ;
    //delete timer;
}

void DebositMoneyWindow::on_btn_deposit_20_clicked()
{
    //timer->start();
    qDebug() << "btn_deposit_20_clicked" ;
    depositAmount = "20";
    QJsonObject jsonObj;
    jsonObj.insert("idaccount", accId);
    jsonObj.insert("talletus", depositAmount);


    QString site_url = "http://localhost:3000/account/Talletus/" + accId + "/" + depositAmount;
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //webtoken tähän alas
    //QByteArray myToken = "Bearer " +webToken;
    //request.setRawHeader(QByteArray("Authorization"),(myToken));

    putManager = new QNetworkAccessManager(this);
    connect(putManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateBalanceSLotD(QNetworkReply*)));

    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());

}


void DebositMoneyWindow::on_btn_deposit_40_clicked()
{
    //timer->start();
    qDebug() << "btn_deposit_40_clicked" ;
    depositAmount = "40";
    QJsonObject jsonObj;
    jsonObj.insert("idaccount", accId);
    jsonObj.insert("talletus", depositAmount);


    QString site_url = "http://localhost:3000/account/Talletus/" + accId + "/" + depositAmount;
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //webtoken tähän alas
    //QByteArray myToken = "Bearer " +webToken;
    //request.setRawHeader(QByteArray("Authorization"),(myToken));

    putManager = new QNetworkAccessManager(this);
    connect(putManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateBalanceSLotD(QNetworkReply*)));

    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());

}


void DebositMoneyWindow::on_btn_deposit_60_clicked()
{
    //timer->start();
    qDebug() << "btn_deposit_60_clicked" ;
    depositAmount = "60";
    QJsonObject jsonObj;
    jsonObj.insert("idaccount", accId);
    jsonObj.insert("talletus", depositAmount);


    QString site_url = "http://localhost:3000/account/Talletus/" + accId + "/" + depositAmount;
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //webtoken tähän alas
    //QByteArray myToken = "Bearer " +webToken;
    //request.setRawHeader(QByteArray("Authorization"),(myToken));

    putManager = new QNetworkAccessManager(this);
    connect(putManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateBalanceSLotD(QNetworkReply*)));

    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());

}


void DebositMoneyWindow::on_btn_deposit_100_clicked()
{
    //timer->start();
    qDebug() << "btn_deposit_100_clicked" ;
    depositAmount = "100";
    QJsonObject jsonObj;
    jsonObj.insert("idaccount", accId);
    jsonObj.insert("talletus", depositAmount);


    QString site_url = "http://localhost:3000/account/Talletus/" + accId + "/" + depositAmount;
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //webtoken tähän alas
    //QByteArray myToken = "Bearer " +webToken;
    //request.setRawHeader(QByteArray("Authorization"),(myToken));

    putManager = new QNetworkAccessManager(this);
    connect(putManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateBalanceSLotD(QNetworkReply*)));

    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());

}


void DebositMoneyWindow::on_btn_deposit_200_clicked()
{
    //timer->start();
    qDebug() << "btn_deposit_200_clicked" ;
    depositAmount = "200";
    QJsonObject jsonObj;
    jsonObj.insert("idaccount", accId);
    jsonObj.insert("talletus", depositAmount);


    QString site_url = "http://localhost:3000/account/Talletus/" + accId + "/" + depositAmount;
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //webtoken tähän alas
    //QByteArray myToken = "Bearer " +webToken;
    //request.setRawHeader(QByteArray("Authorization"),(myToken));

    putManager = new QNetworkAccessManager(this);
    connect(putManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateBalanceSLotD(QNetworkReply*)));

    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());

}


void DebositMoneyWindow::on_btn_deposit_500_clicked()
{
    //timer->start();
    qDebug() << "btn_deposit_500_clicked" ;
    depositAmount = "500";
    QJsonObject jsonObj;
    jsonObj.insert("idaccount", accId);
    jsonObj.insert("talletus", depositAmount);


    QString site_url = "http://localhost:3000/account/Talletus/" + accId + "/" + depositAmount;
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //webtoken tähän alas
    //QByteArray myToken = "Bearer " +webToken;
    //request.setRawHeader(QByteArray("Authorization"),(myToken));

    putManager = new QNetworkAccessManager(this);
    connect(putManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateBalanceSLotD(QNetworkReply*)));

    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());

}


void DebositMoneyWindow::on_btn_deposit_return_clicked()
{
    qDebug() << "btn_deposit_return_clicked" ;
    close();
    deleteLater();
}

void DebositMoneyWindow::updateBalanceSLotD(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug() << "Data deposit: "<< response_data;
    //QMessageBox msgBox;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(response_data);
    QJsonObject jsonObj = jsonDoc.object();
    if(response_data == "-4078"){
        qDebug() << "Tietokantaan ei yhteyttä";
        ui->label_deposit->setText("Tietokantaan ei yhteyttä");

        //msgBox.setText("Tietokantaan ei yhteyttä");
        //QTimer::singleShot(10000, &msgBox, &QMessageBox::close);
        //msgBox.exec();
    }
    else if(jsonObj["affectedRows"].toInt() == 0) {
        qDebug()<< "Tapahtui virhe" << response_data;
        ui->label_deposit->setText("Tapahtui odottamaton virhe");

        //msgBox.setText("Tapahtui odottamaton virhe");
        //QTimer::singleShot(10000, &msgBox, &QMessageBox::close);
        //msgBox.exec();
    }
    else if(jsonObj["affectedRows"].toInt() == 1){
        qDebug()<< "Talletettu " << depositAmount <<"e";
        ui->label_deposit->setText("Talletettu "  +depositAmount +"e");

        //msgBox.setText("Tilille talletettu " +depositAmount +"e");
        //QTimer::singleShot(10000, &msgBox, &QMessageBox::close);
        //msgBox.exec();
    }
    reply->deleteLater();
    putManager->deleteLater();
    //timer->stop();
    //deleteLater();
}

