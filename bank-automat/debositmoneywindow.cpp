#include "debositmoneywindow.h"
#include "ui_debositmoneywindow.h"

DebositMoneyWindow::DebositMoneyWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DebositMoneyWindow)
{
    ui->setupUi(this);
}

DebositMoneyWindow::~DebositMoneyWindow()
{
    delete ui;
}
