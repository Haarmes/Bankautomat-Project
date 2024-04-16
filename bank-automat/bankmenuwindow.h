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
    explicit BankMenuWindow(QWidget *parent = nullptr, QString token = 0, QString id = "0");
    ~BankMenuWindow(void);

private slots:
    void buttonHandler(void);

private:
    Ui::BankMenuWindow *ui;
    WithdrawMoneyWindow *withmoneyw;
    DebositMoneyWindow *depomoneyw;
    ShowBalanceWindow *showbalaw;
    TransactionWindow *showtransw;
    QString webToken;
    QString idaccount;
};

#endif // BANKMENUWINDOW_H
