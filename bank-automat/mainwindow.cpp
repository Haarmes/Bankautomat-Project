#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptr_rfiddll = new Rfid_dll(this);     //Luodaan uusi rfid olio (dll kansiossa sijaitsee)
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleRfid(short number)
{
    qDebug()<<number;
}
