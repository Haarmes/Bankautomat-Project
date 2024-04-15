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
    explicit BankMenuWindow(QWidget *parent = nullptr, QString token = 0);
    ~BankMenuWindow();

private slots:
    void buttonHandler();


private:
    Ui::BankMenuWindow *ui;
    WithdrawMoneyWindow *withmoneyw;
    DebositMoneyWindow *depomoneyw;
    ShowBalanceWindow *showbalaw;
    QString webToken;
    TransactionWindow *showtransw;

};

#endif // BANKMENUWINDOW_H
