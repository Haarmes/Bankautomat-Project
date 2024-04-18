#include "showbalancewindow.h"
#include "ui_showbalancewindow.h"

ShowBalanceWindow::ShowBalanceWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ShowBalanceWindow)
{
    ui->setupUi(this);
}

ShowBalanceWindow::~ShowBalanceWindow()
{
    delete ui;
}
