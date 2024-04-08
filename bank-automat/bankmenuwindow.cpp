#include "bankmenuwindow.h"
#include "ui_bankmenuwindow.h"

BankMenuWindow::BankMenuWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BankMenuWindow)
{
    ui->setupUi(this);

    const QStringList buttonList = {"withdraw", "deposit", "balance", "transaction", "logout"};
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

    if(name == "withdraw")
    {
        qDebug() << "Button pressed: " << name;
    }
    else if(name == "deposit")
    {
        qDebug() << "Button pressed: " << name;
    }
    else if(name == "balance")
    {
        qDebug() << "Button pressed: " << name;
    }
    else if(name == "transaction")
    {
        qDebug() << "Button pressed: " << name;
    }
    else if(name == "logout")
    {
        qDebug() << "Button pressed: " << name;
    }
}
