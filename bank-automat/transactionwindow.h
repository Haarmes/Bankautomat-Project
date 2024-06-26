#ifndef TRANSACTIONWINDOW_H
#define TRANSACTIONWINDOW_H

#include <QDialog>
#include <QDebug>
#include <QStandardItemModel>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QStringList>

namespace Ui {
class TransactionWindow;
}

class TransactionWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TransactionWindow(QWidget *parent = nullptr, QString token = 0, QString id = "0");
    ~TransactionWindow(void);

private slots:
    void getTransactionSlot(QNetworkReply *reply);
    void on_btnNewer_clicked(void);
    void on_btnOlder_clicked(void);

private:
    Ui::TransactionWindow *ui;
    QStandardItemModel *model = new QStandardItemModel();
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
    QString offsetString;
    QString idaccountString;
    QString transactionArr[20];
    QString webToken;

    void getTransactionsByOffset(void);
    void setTransactions(void);
};

#endif // TRANSACTIONWINDOW_H
