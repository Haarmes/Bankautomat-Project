#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    ptr_rfiddll = new Rfid_dll(this);     //Luodaan uusi rfid olio (dll kansiossa sijaitsee)
    ptr_rfiddll->rfidConnect(); //yhdistetään tai "avataan" rfid portti. eli laite on luku tilassa
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleRfid(QString cardnumber)
{
    qDebug() << "mainWindown handle rfid";
    qDebug() << cardnumber;
}


void MainWindow::on_btnTempOpenBankMenuUI_clicked()
{
    bankmenuw = new BankMenuWindow(this); // bankmenuwindow
    bankmenuw->show();
}


void MainWindow::on_btnTempOpenCardSelectUI_clicked()
{
    cardSelectW = new CardSelect(); // cardSelectWindow
    cardSelectW->show();
}

