/********************************************************************************
** Form generated from reading UI file 'debositmoneywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBOSITMONEYWINDOW_H
#define UI_DEBOSITMONEYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DebositMoneyWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_deposit;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_deposit_20;
    QPushButton *btn_deposit_40;
    QPushButton *btn_deposit_60;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_deposit_100;
    QPushButton *btn_deposit_200;
    QPushButton *btn_deposit_500;
    QPushButton *btn_deposit_return;

    void setupUi(QWidget *DebositMoneyWindow)
    {
        if (DebositMoneyWindow->objectName().isEmpty())
            DebositMoneyWindow->setObjectName(QString::fromUtf8("DebositMoneyWindow"));
        DebositMoneyWindow->resize(400, 300);
        QFont font;
        font.setPointSize(12);
        DebositMoneyWindow->setFont(font);
        verticalLayoutWidget = new QWidget(DebositMoneyWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 11, 381, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(17);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2, 0, Qt::AlignHCenter);

        label_deposit = new QLabel(verticalLayoutWidget);
        label_deposit->setObjectName(QString::fromUtf8("label_deposit"));

        verticalLayout->addWidget(label_deposit, 0, Qt::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_deposit_20 = new QPushButton(verticalLayoutWidget);
        btn_deposit_20->setObjectName(QString::fromUtf8("btn_deposit_20"));

        horizontalLayout->addWidget(btn_deposit_20);

        btn_deposit_40 = new QPushButton(verticalLayoutWidget);
        btn_deposit_40->setObjectName(QString::fromUtf8("btn_deposit_40"));

        horizontalLayout->addWidget(btn_deposit_40);

        btn_deposit_60 = new QPushButton(verticalLayoutWidget);
        btn_deposit_60->setObjectName(QString::fromUtf8("btn_deposit_60"));

        horizontalLayout->addWidget(btn_deposit_60);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_deposit_100 = new QPushButton(verticalLayoutWidget);
        btn_deposit_100->setObjectName(QString::fromUtf8("btn_deposit_100"));

        horizontalLayout_2->addWidget(btn_deposit_100);

        btn_deposit_200 = new QPushButton(verticalLayoutWidget);
        btn_deposit_200->setObjectName(QString::fromUtf8("btn_deposit_200"));

        horizontalLayout_2->addWidget(btn_deposit_200);

        btn_deposit_500 = new QPushButton(verticalLayoutWidget);
        btn_deposit_500->setObjectName(QString::fromUtf8("btn_deposit_500"));

        horizontalLayout_2->addWidget(btn_deposit_500);


        verticalLayout->addLayout(horizontalLayout_2);

        btn_deposit_return = new QPushButton(verticalLayoutWidget);
        btn_deposit_return->setObjectName(QString::fromUtf8("btn_deposit_return"));

        verticalLayout->addWidget(btn_deposit_return);


        retranslateUi(DebositMoneyWindow);

        QMetaObject::connectSlotsByName(DebositMoneyWindow);
    } // setupUi

    void retranslateUi(QWidget *DebositMoneyWindow)
    {
        DebositMoneyWindow->setWindowTitle(QCoreApplication::translate("DebositMoneyWindow", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("DebositMoneyWindow", "Talleta Rahaa", nullptr));
        label_deposit->setText(QCoreApplication::translate("DebositMoneyWindow", "Valitse Summa", nullptr));
        btn_deposit_20->setText(QCoreApplication::translate("DebositMoneyWindow", "20e", nullptr));
        btn_deposit_40->setText(QCoreApplication::translate("DebositMoneyWindow", "40e", nullptr));
        btn_deposit_60->setText(QCoreApplication::translate("DebositMoneyWindow", "60e", nullptr));
        btn_deposit_100->setText(QCoreApplication::translate("DebositMoneyWindow", "100e", nullptr));
        btn_deposit_200->setText(QCoreApplication::translate("DebositMoneyWindow", "200e", nullptr));
        btn_deposit_500->setText(QCoreApplication::translate("DebositMoneyWindow", "500e", nullptr));
        btn_deposit_return->setText(QCoreApplication::translate("DebositMoneyWindow", "Palaa Takaisin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DebositMoneyWindow: public Ui_DebositMoneyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBOSITMONEYWINDOW_H
