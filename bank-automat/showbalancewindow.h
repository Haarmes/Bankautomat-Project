#ifndef SHOWBALANCEWINDOW_H
#define SHOWBALANCEWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QDialog>
#include <QStandardItemModel>


namespace Ui {
class ShowBalanceWindow;
}

class ShowBalanceWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ShowBalanceWindow(QWidget *parent, const QString token, const QString id);
    ~ShowBalanceWindow();


private slots:
    void getUserInfoSlot(QNetworkReply *reply);

private:
    Ui::ShowBalanceWindow *ui;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
    QString webToken;
    QString userId;
    QStandardItemModel *model; // Model for the table view

};

#endif // SHOWBALANCEWINDOW_H
