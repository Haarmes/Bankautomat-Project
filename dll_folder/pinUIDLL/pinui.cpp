#include "pinui.h"
#include "ui_pinui.h"


pinUI::pinUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pinUI)
{
    ui->setupUi(this);

    //Pin buttons
    connect(ui->btn0, SIGNAL(clicked(bool)),this,SLOT(numberClicked()));
    connect(ui->btn1, SIGNAL(clicked(bool)),this,SLOT(numberClicked()));
    connect(ui->btn2, SIGNAL(clicked(bool)),this,SLOT(numberClicked()));
    connect(ui->btn3, SIGNAL(clicked(bool)),this,SLOT(numberClicked()));
    connect(ui->btn4, SIGNAL(clicked(bool)),this,SLOT(numberClicked()));
    connect(ui->btn5, SIGNAL(clicked(bool)),this,SLOT(numberClicked()));
    connect(ui->btn6, SIGNAL(clicked(bool)),this,SLOT(numberClicked()));
    connect(ui->btn7, SIGNAL(clicked(bool)),this,SLOT(numberClicked()));
    connect(ui->btn8, SIGNAL(clicked(bool)),this,SLOT(numberClicked()));
    connect(ui->btn9, SIGNAL(clicked(bool)),this,SLOT(numberClicked()));

    //Enter & Cancel
    connect(ui->btnEnter, SIGNAL(clicked(bool)),this,SLOT(onbtnEnterClicked()));
    connect(ui->btnCancel, SIGNAL(clicked(bool)),this,SLOT(onbtnCancelClicked()));

    userPIN = "";

}

pinUI::~pinUI()
{
    delete ui;
}

void pinUI::onbtnEnterClicked()
{
    qDebug()<<"Verifying PIN";
    QString userPIN = ui->userPINfield->text();
    emit PinEntered(userPIN);

}

void pinUI::onbtnCancelClicked()
{
    userPIN ="";
    ui->userPINfield->clear();
}

void pinUI::numberClicked()
{
    QPushButton *button=qobject_cast<QPushButton*>(sender());
    if (button) {
        QString digit = button->text();
        if(userPIN.length() < 4){
            userPIN += digit;

            ui->userPINfield->setText(ui->userPINfield->text()+digit);
        }
    }
}

