#include "withdrawmoneywindow.h"
#include "ui_withdrawmoneywindow.h"

WithdrawMoneyWindow::WithdrawMoneyWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WithdrawMoneyWindow)
{
    ui->setupUi(this);
}

WithdrawMoneyWindow::~WithdrawMoneyWindow()
{
    delete ui;
}
