#ifndef CARDSELECT_H
#define CARDSELECT_H

#include <QDialog>
#include <QWidget>
#include <QDebug>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>


namespace Ui {
class CardSelect;
}

class CardSelect : public QDialog
{
    Q_OBJECT

public:
    explicit CardSelect(QWidget *parent = nullptr, QString token = "0");
    ~CardSelect();

private slots:
    void creditSlot(QNetworkReply *reply);
    void handleWebToken(QString);
    void on_btnDebitSelect_clicked();

    void on_btnCreditSelect_clicked();

private:
    Ui::CardSelect *ui;
    QNetworkAccessManager *cardSelectManager;
    QNetworkReply *reply;
    QByteArray response_data;
    QString webToken;

signals:
    void cardSelectSignal(QString);
};

#endif // CARDSELECT_H
