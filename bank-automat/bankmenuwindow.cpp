#include "bankmenuwindow.h"
#include "ui_bankmenuwindow.h"

BankMenuWindow::BankMenuWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BankMenuWindow)
{
    ui->setupUi(this);

    const QStringList buttonList = {"btnWithdraw", "btnDeposit", "btnBalance", "btnTransaction", "btnLogout"};
    QPushButton *buttonPtr;

    for(const QString& buttonName : buttonList)
    {
        buttonPtr = findChild<QPushButton*>(buttonName); // etsii QPushButton:ia nimellä 'buttonName'

        if(buttonPtr)
            connect(buttonPtr, &QPushButton::clicked, this, &BankMenuWindow::buttonHandler); // yhdistää löydetyn buttonin buttonHandler funktioon
    }
    qDebug() << "BankMenuWindow Constructed";
}

BankMenuWindow::~BankMenuWindow()
{
    delete ui;
    qDebug() << "BankMenuWindow Destructed";
}

void BankMenuWindow::buttonHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    if(name == "btnWithdraw")
    {
        qDebug() << "Button pressed: " << name;
    }
    else if(name == "btnDeposit")
    {
        qDebug() << "Button pressed: " << name;
    }
    else if(name == "btnBalance")
    {
        qDebug() << "Button pressed: " << name;
    }
    else if(name == "btnTransaction")
    {
        qDebug() << "Button pressed: " << name;
    }
    else if(name == "btnLogout")
    {
        qDebug() << "Button pressed: " << name;
    }
}

void BankMenuWindow::on_btnWithdraw_clicked()
{
    withmoneyw = new WithdrawMoneyWindow(); // Withdraw money window
    withmoneyw->show();
}

void BankMenuWindow::on_btnDeposit_clicked()
{
    depomoneyw = new DebositMoneyWindow(); // Deposite money window
    depomoneyw->show();
}

void BankMenuWindow::on_btnBalance_clicked()
{
    showbalaw = new ShowBalanceWindow(); // Show Balance window
    showbalaw->show();
}

void BankMenuWindow::on_btnTransaction_clicked()
{
    showtransw = new TransactionWindow(); // Show Transaction window
    showtransw->show();
}
