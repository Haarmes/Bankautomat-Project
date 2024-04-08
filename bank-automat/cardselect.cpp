#include "cardselect.h"
#include "ui_cardselect.h"

CardSelect::CardSelect(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CardSelect)
{
    ui->setupUi(this);
    qDebug() << "CardSelect ui Constructed";
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
    QJsonArray json_array = json_doc.array();
    qDebug()<<  json_array;
}

void CardSelect::on_btnDebitSelect_clicked()
{
    QString cardnumber = "11111111";

    QString site_url="http://localhost:3000/debit/" + cardnumber;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    cardSelectManager = new QNetworkAccessManager(this);
    connect(cardSelectManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(creditSlot(QNetworkReply*)));

    reply = cardSelectManager->get(request);
}


void CardSelect::on_btnCreditSelect_clicked()
{

    QString cardnumber = "11111111";

    QString site_url="http://localhost:3000/credit/" + cardnumber;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");



    cardSelectManager = new QNetworkAccessManager(this);
    connect(cardSelectManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(creditSlot(QNetworkReply*)));

    reply = cardSelectManager->get(request);
}

