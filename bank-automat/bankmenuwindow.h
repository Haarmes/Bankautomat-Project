#ifndef BANKMENUWINDOW_H
#define BANKMENUWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include "debositmoneywindow.h"
#include "showbalancewindow.h"
#include "withdrawmoneywindow.h"
#include "transactionwindow.h"

namespace Ui {
class BankMenuWindow;
}

class BankMenuWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BankMenuWindow(QWidget *parent = nullptr);
    ~BankMenuWindow();

private slots:
    void buttonHandler();

    void on_btnWithdraw_clicked();

    void on_btnDeposit_clicked();

    void on_btnBalance_clicked();

    void on_btnTransaction_clicked();

private:
    Ui::BankMenuWindow *ui;
    WithdrawMoneyWindow *withmoneyw;
    DebositMoneyWindow *depomoneyw;
    ShowBalanceWindow *showbalaw;
    TransactionWindow *showtransw;
};

#endif // BANKMENUWINDOW_H
