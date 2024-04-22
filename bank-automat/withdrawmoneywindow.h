#ifndef WITHDRAWMONEYWINDOW_H
#define WITHDRAWMONEYWINDOW_H


#include <QDebug>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QTimer>
#include <QMessageBox>
#include <QDialog>

namespace Ui {
class WithdrawMoneyWindow;
}

class WithdrawMoneyWindow : public QDialog
{
    Q_OBJECT

public:
    explicit WithdrawMoneyWindow(QWidget *parent = nullptr, QString token = 0, QString id = 0);
    ~WithdrawMoneyWindow();

private slots:
    void on_btn_withdraw_20_clicked();

    void on_btn_withdraw_40_clicked();

    void on_btn_withdraw_60_clicked();

    void on_btn_withdraw_100_clicked();

    void on_btn_withdraw_200_clicked();

    void on_btn_withdraw_500_clicked();

    void on_btn_withdraw_return_clicked();

    void updateBalanceSLotW (QNetworkReply *reply);


private:
    Ui::WithdrawMoneyWindow *ui;
    QNetworkAccessManager *putManager;
    QNetworkReply *reply;
    QByteArray response_data;

    QString withDrawAmount;
    QString accId;
    QString webToken;
    QTimer *timer;
};

#endif // WITHDRAWMONEYWINDOW_H
