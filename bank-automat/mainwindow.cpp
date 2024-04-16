#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    ptr_rfiddll = new Rfid_dll(this);     //Luodaan uusi rfid olio (dll kansiossa sijaitsee)
    ptr_rfiddll->rfidConnect(); //yhdistetään tai "avataan" rfid portti. eli laite on luku tilassa
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::handleRfid(QString cardnumber)
{
    qDebug() << "mainWindown handle rfid";
    qDebug() << cardnumber;
    cardNumber = cardnumber;
    ptr_pinui = new pinUI(this);
    ptr_pinui->show();

}

void MainWindow::handlePinUi(QString pinnumber)
{
    qDebug() << "mainWindown handle pinui";
    qDebug() << pinnumber;
    pinNumber = pinnumber;

    // laitetaan parametrin json objektiin
    QJsonObject jsonObj;
    jsonObj.insert("cardnumber", cardNumber);
    jsonObj.insert("password", pinNumber);


    QString site_url="http://localhost:3000/login" ;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    loginManager = new QNetworkAccessManager(this);
    connect(loginManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(loginSlot(QNetworkReply*)));
    reply = loginManager->post(request, QJsonDocument(jsonObj).toJson());

}

void MainWindow::handleCardSelect(QString accountnumber)
{
    qDebug()<<" Handling card select";
    bankmenuw = new BankMenuWindow(this, webToken); // bankmenuwindow
    bankmenuw->show();
    accountNumber = accountnumber;

}

void MainWindow::loginSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<"DATA : "+response_data;
    if(response_data == "false"){
        qDebug()<< "False tuli";
    }

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);


    QJsonArray json_array = json_doc.array();
    QJsonObject json_obj;
    json_obj = json_doc.object();

    QJsonValue jsonVal;
    jsonVal = json_obj.value("errorreason");
    if(jsonVal.toString() == ""){
        qDebug() << "ei err reasonia";
    }
    else{
        qDebug() << "ERROR:";
        qDebug() << jsonVal.toString();


    }

    jsonVal = json_obj.value("conToken");
    if(jsonVal.toString() == ""){
        qDebug() << "ei tokenia";
    }
    else{
        qDebug() << "TOKEN:";
        qDebug() << jsonVal.toString();
        webToken = jsonVal.toString();

        QString site_url2="http://localhost:3000/card/" + cardNumber;
        QNetworkRequest request2((site_url2));
        //WEBTOKEN ALKU

        QByteArray myToken="Bearer " + webToken.toUtf8();
        request2.setRawHeader(QByteArray("Authorization"),(myToken));
        //WEBTOKEN LOPPU



        cardGetManager = new QNetworkAccessManager(this);
        connect(cardGetManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(cardGetSlot(QNetworkReply*)));
        reply2 = cardGetManager->get(request2);
    }
    reply->deleteLater();
    loginManager->deleteLater();
}

void MainWindow::cardGetSlot(QNetworkReply *reply2)
{
    response_data=reply2->readAll();
    qDebug()<<"DATA : "+response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);


    QJsonArray json_array = json_doc.array();
    QJsonObject json_obj;
    json_obj = json_doc.object();

    QJsonValue jsonVal;
    jsonVal = json_obj.value("doublecard");
    if(jsonVal.toInt() == 1){
        qDebug() << "1";
        cardSelectW = new CardSelect(this, webToken); // cardSelectWindow
        cardSelectW->show();
    }
    else{
        qDebug() << "Ei ole tuplakortti";
        qDebug() << jsonVal.toString();
        bankmenuw = new BankMenuWindow(this, webToken); // bankmenuwindow
        bankmenuw->show();


    }
    reply2->deleteLater();
    cardGetManager->deleteLater();
}


void MainWindow::on_btnTempOpenBankMenuUI_clicked()
{
    bankmenuw = new BankMenuWindow(this, webToken); // bankmenuwindow
    bankmenuw->show();
}


void MainWindow::on_btnTempOpenCardSelectUI_clicked()
{
    cardSelectW = new CardSelect(this, webToken); // cardSelectWindow
    cardSelectW->show();
}

