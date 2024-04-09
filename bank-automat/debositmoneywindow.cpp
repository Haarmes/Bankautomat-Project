#include "debositmoneywindow.h"
#include "ui_debositmoneywindow.h"

DebositMoneyWindow::DebositMoneyWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DebositMoneyWindow)
{
    ui->setupUi(this);
}

DebositMoneyWindow::~DebositMoneyWindow()
{
    delete ui;
}
