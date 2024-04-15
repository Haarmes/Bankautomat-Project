#include "bankmenuwindow.h"
#include "ui_bankmenuwindow.h"

BankMenuWindow::BankMenuWindow(QWidget *parent, QString token)
    : QMainWindow(parent)
    , ui(new Ui::BankMenuWindow)
{
    ui->setupUi(this);

    webToken = token;


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
        withmoneyw = new WithdrawMoneyWindow(this); // Withdraw money window
        withmoneyw->show();
    }
    else if(name == "btnDeposit")
    {
        qDebug() << "Button pressed: " << name;
        depomoneyw = new DebositMoneyWindow(this); // Deposite money window
        depomoneyw->show();
    }
    else if(name == "btnBalance")
    {
        qDebug() << "Button pressed: " << name;
        showbalaw = new ShowBalanceWindow(this); // Show Balance window
        showbalaw->show();
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


void BankMenuWindow::on_btnTransaction_clicked()
{
    showtransw = new TransactionWindow(); // Show Transaction window
    showtransw->show();
}
