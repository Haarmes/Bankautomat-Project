#include "bankmenuwindow.h"
#include "ui_bankmenuwindow.h"

BankMenuWindow::BankMenuWindow(QWidget *parent, QString token, QString id)
    : QMainWindow(parent)
    , ui(new Ui::BankMenuWindow)
{
    ui->setupUi(this);

    webToken = token;
    idaccount = id;
    connect(this, SIGNAL(signalLogout()), this->parent(), SLOT(handleLogout()));

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

BankMenuWindow::~BankMenuWindow(void)
{
    delete ui;
    qDebug() << "BankMenuWindow Destructed";
}

void BankMenuWindow::buttonHandler(void)
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    if(name == "btnWithdraw")
    {
        qDebug() << "Button pressed: " << name;
        withmoneyw = new WithdrawMoneyWindow(this, webToken, idaccount); // Withdraw money window
        withmoneyw->showFullScreen();
    }
    else if(name == "btnDeposit")
    {
        qDebug() << "Button pressed: " << name;
        depomoneyw = new DebositMoneyWindow(this, webToken, idaccount); // Deposit money window
        depomoneyw->showFullScreen();
    }
    else if(name == "btnBalance")
    {
        qDebug() << "Button pressed: " << name;
        showbalaw = new ShowBalanceWindow(this); // Show Balance window
        showbalaw->showFullScreen();
    }
    else if(name == "btnTransaction")
    {
        qDebug() << "Button pressed: " << name;
        showtransw = new TransactionWindow(this, webToken, idaccount); // Show Transaction window
        showtransw->showFullScreen();
    }
    else if(name == "btnLogout")
    {
        qDebug() << "Button pressed: " << name;
        emit signalLogout();
        //qApp->quit();
    }
}
