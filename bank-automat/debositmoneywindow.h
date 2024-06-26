#ifndef DEBOSITMONEYWINDOW_H
#define DEBOSITMONEYWINDOW_H



#include <QWidget>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QTimer>
#include <QMessageBox>
#include <QDialog>


namespace Ui {
class DebositMoneyWindow;
}

class DebositMoneyWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DebositMoneyWindow(QWidget *parent = nullptr, QString token = 0, QString id = 0);
    ~DebositMoneyWindow();

private slots:
    void on_btn_deposit_20_clicked();

    void on_btn_deposit_40_clicked();

    void on_btn_deposit_60_clicked();

    void on_btn_deposit_100_clicked();

    void on_btn_deposit_200_clicked();

    void on_btn_deposit_500_clicked();

    void on_btn_deposit_return_clicked();

    void updateBalanceSLotD (QNetworkReply *reply);

private:
    Ui::DebositMoneyWindow *ui;
    QNetworkAccessManager *putManager;
    QNetworkReply *reply;
    QByteArray response_data;

    QString accId;
    QString webToken;
    QString depositAmount;
    QTimer *timer;
};

#endif // DEBOSITMONEYWINDOW_H
