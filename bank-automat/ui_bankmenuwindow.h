/********************************************************************************
** Form generated from reading UI file 'bankmenuwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANKMENUWINDOW_H
#define UI_BANKMENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BankMenuWindow
{
public:
    QWidget *centralwidget;
    QLabel *bankMenuLabel;
    QPushButton *btnLogout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnWithdraw;
    QPushButton *btnDeposit;
    QPushButton *btnBalance;
    QPushButton *btnTransaction;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BankMenuWindow)
    {
        if (BankMenuWindow->objectName().isEmpty())
            BankMenuWindow->setObjectName(QString::fromUtf8("BankMenuWindow"));
        BankMenuWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BankMenuWindow->sizePolicy().hasHeightForWidth());
        BankMenuWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(BankMenuWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        bankMenuLabel = new QLabel(centralwidget);
        bankMenuLabel->setObjectName(QString::fromUtf8("bankMenuLabel"));
        bankMenuLabel->setGeometry(QRect(10, 10, 781, 131));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bankMenuLabel->sizePolicy().hasHeightForWidth());
        bankMenuLabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(17);
        bankMenuLabel->setFont(font);
        bankMenuLabel->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        btnLogout = new QPushButton(centralwidget);
        btnLogout->setObjectName(QString::fromUtf8("btnLogout"));
        btnLogout->setGeometry(QRect(210, 320, 381, 51));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnLogout->sizePolicy().hasHeightForWidth());
        btnLogout->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        btnLogout->setFont(font1);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 250, 781, 51));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnWithdraw = new QPushButton(widget);
        btnWithdraw->setObjectName(QString::fromUtf8("btnWithdraw"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnWithdraw->sizePolicy().hasHeightForWidth());
        btnWithdraw->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setPointSize(12);
        btnWithdraw->setFont(font2);

        horizontalLayout->addWidget(btnWithdraw);

        btnDeposit = new QPushButton(widget);
        btnDeposit->setObjectName(QString::fromUtf8("btnDeposit"));
        sizePolicy3.setHeightForWidth(btnDeposit->sizePolicy().hasHeightForWidth());
        btnDeposit->setSizePolicy(sizePolicy3);
        btnDeposit->setMinimumSize(QSize(0, 0));
        btnDeposit->setFont(font2);

        horizontalLayout->addWidget(btnDeposit);

        btnBalance = new QPushButton(widget);
        btnBalance->setObjectName(QString::fromUtf8("btnBalance"));
        sizePolicy3.setHeightForWidth(btnBalance->sizePolicy().hasHeightForWidth());
        btnBalance->setSizePolicy(sizePolicy3);
        btnBalance->setFont(font2);

        horizontalLayout->addWidget(btnBalance);

        btnTransaction = new QPushButton(widget);
        btnTransaction->setObjectName(QString::fromUtf8("btnTransaction"));
        sizePolicy3.setHeightForWidth(btnTransaction->sizePolicy().hasHeightForWidth());
        btnTransaction->setSizePolicy(sizePolicy3);
        btnTransaction->setFont(font2);

        horizontalLayout->addWidget(btnTransaction);


        verticalLayout->addLayout(horizontalLayout);

        BankMenuWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BankMenuWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        BankMenuWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(BankMenuWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BankMenuWindow->setStatusBar(statusbar);

        retranslateUi(BankMenuWindow);

        QMetaObject::connectSlotsByName(BankMenuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BankMenuWindow)
    {
        BankMenuWindow->setWindowTitle(QCoreApplication::translate("BankMenuWindow", "MainWindow", nullptr));
        bankMenuLabel->setText(QCoreApplication::translate("BankMenuWindow", "P\303\244\303\244valikko", nullptr));
        btnLogout->setText(QCoreApplication::translate("BankMenuWindow", "Kirjaudu Ulos", nullptr));
        btnWithdraw->setText(QCoreApplication::translate("BankMenuWindow", "Nosto", nullptr));
        btnDeposit->setText(QCoreApplication::translate("BankMenuWindow", "Talletus", nullptr));
        btnBalance->setText(QCoreApplication::translate("BankMenuWindow", "Saldo", nullptr));
        btnTransaction->setText(QCoreApplication::translate("BankMenuWindow", "Tilitapahtumat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BankMenuWindow: public Ui_BankMenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANKMENUWINDOW_H
