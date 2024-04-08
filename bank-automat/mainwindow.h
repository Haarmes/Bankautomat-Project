#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include "rfid_dll.h"
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

private slots:

    //Väliaikaiset napit. poistetaan lopullisesta
    void on_btnTempOpenBankMenuUI_clicked();
    void on_btnTempOpenCardSelectUI_clicked();

private:
    //ikkunat
    Ui::MainWindow *ui;
    BankMenuWindow *bankmenuw;
    CardSelect *cardSelectW;

    //dll
    Rfid_dll * ptr_rfiddll;

    //muuttujia
    short attemptsLeft;
    short cardNumber;
    short pinNumber;

    //network
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;

};
#endif // MAINWINDOW_H
