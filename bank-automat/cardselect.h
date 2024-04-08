#ifndef CARDSELECT_H
#define CARDSELECT_H

#include <QWidget>
#include <QDebug>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>


namespace Ui {
class CardSelect;
}

class CardSelect : public QWidget
{
    Q_OBJECT

public:
    explicit CardSelect(QWidget *parent = nullptr);
    ~CardSelect();

private slots:
    void creditSlot(QNetworkReply *reply);
    void on_btnDebitSelect_clicked();

    void on_btnCreditSelect_clicked();

private:
    Ui::CardSelect *ui;
    QNetworkAccessManager *cardSelectManager;
    QNetworkReply *reply;
    QByteArray response_data;
};

#endif // CARDSELECT_H
