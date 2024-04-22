#include "cardselect.h"
#include "ui_cardselect.h"

CardSelect::CardSelect(QWidget *parent, QString token, QString cardnumber)
    : QDialog(parent)
    , ui(new Ui::CardSelect)
{
    ui->setupUi(this);
    qDebug() << "CardSelect ui Constructed";
    connect(this, SIGNAL(cardSelectSignal(QString)), this->parent(), SLOT(handleCardSelect(QString)));
    qDebug() << token;
    webToken = token;
    cardNumber = cardnumber;
}

CardSelect::~CardSelect()
{
    delete ui;
    qDebug() << "CardSelect ui Destructor";
}

void CardSelect::creditSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<"DATA : "+response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);

    //QJsonArray json_array = json_doc.array();
    QJsonObject json_obj;
    json_obj = json_doc.object();
    QJsonValue jsonVal;
    jsonVal = json_obj.value(QString("idaccount"));
    short accountidNumber = jsonVal.toInt();
    QString accountidString = QString::number(accountidNumber);
    emit cardSelectSignal(accountidString);
}

void CardSelect::handleWebToken(QString token)
{
    webToken = token;
}

void CardSelect::on_btnDebitSelect_clicked()
{

    QString site_url="http://localhost:3000/debit/" + cardNumber;
    QNetworkRequest request((site_url));


    //WEBTOKEN ALKU
    QByteArray myToken="Bearer "+ webToken.toUtf8();
    request.setRawHeader(QByteArray("Authorization"),(myToken));
    //WEBTOKEN LOPPU

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    cardSelectManager = new QNetworkAccessManager(this);
    connect(cardSelectManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(creditSlot(QNetworkReply*)));

    reply = cardSelectManager->get(request);
}


void CardSelect::on_btnCreditSelect_clicked()
{

    //QString cardnumber = "11111111";

    QString site_url="http://localhost:3000/credit/" + cardNumber;
    QNetworkRequest request((site_url));

    //WEBTOKEN ALKU
    QByteArray myToken="Bearer "+ webToken.toUtf8();
    request.setRawHeader(QByteArray("Authorization"),(myToken));
    //WEBTOKEN LOPPU

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");



    cardSelectManager = new QNetworkAccessManager(this);
    connect(cardSelectManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(creditSlot(QNetworkReply*)));

    reply = cardSelectManager->get(request);
}

