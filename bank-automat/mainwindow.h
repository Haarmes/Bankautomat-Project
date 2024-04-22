#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include "rfid_dll.h"
#include "pinui.h"
#include "bankmenuwindow.h"
#include "cardselect.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void handleRfid(QString);
    void handlePinUi(QString);
    void handleCardSelect(QString);
    void handleLogout();

private slots:
    void loginSlot(QNetworkReply *reply);
    void cardGetSlot(QNetworkReply *reply2);
    void accountGetSlot(QNetworkReply *reply3);

    //Väliaikaiset napit. poistetaan lopullisesta
    void on_btnTempOpenBankMenuUI_clicked();
    void on_btnTempOpenCardSelectUI_clicked();

private:
    //ikkunat
    Ui::MainWindow * ui;
    BankMenuWindow * bankmenuw = nullptr;
    CardSelect * cardSelectW = nullptr;

    //dll
    Rfid_dll * ptr_rfiddll;
    pinUI * ptr_pinui = nullptr;

    //muuttujia
    short attemptsLeft;
    QString cardNumber;
    QString pinNumber;
    QString webToken;
    QString accountNumber;


    //network
    QNetworkAccessManager *loginManager;
    QNetworkAccessManager *cardGetManager;
    QNetworkAccessManager *accountGetManager;
    QNetworkReply *reply;
    QNetworkReply *reply2;
    QNetworkReply *reply3;
    QByteArray response_data;

signals:
    void signalWebToken(QString);
    void signalSingleCard(QString);
    void signalPinLogout();

};
#endif // MAINWINDOW_H
