/********************************************************************************
** Form generated from reading UI file 'withdrawmoneywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAWMONEYWINDOW_H
#define UI_WITHDRAWMONEYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WithdrawMoneyWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_withDraw;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_withdraw_20;
    QPushButton *btn_withdraw_40;
    QPushButton *btn_withdraw_60;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_withdraw_100;
    QPushButton *btn_withdraw_200;
    QPushButton *btn_withdraw_500;
    QPushButton *btn_withdraw_return;

    void setupUi(QWidget *WithdrawMoneyWindow)
    {
        if (WithdrawMoneyWindow->objectName().isEmpty())
            WithdrawMoneyWindow->setObjectName(QString::fromUtf8("WithdrawMoneyWindow"));
        WithdrawMoneyWindow->resize(387, 287);
        QFont font;
        font.setPointSize(12);
        WithdrawMoneyWindow->setFont(font);
        verticalLayoutWidget = new QWidget(WithdrawMoneyWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 371, 271));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(17);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2, 0, Qt::AlignHCenter);

        label_withDraw = new QLabel(verticalLayoutWidget);
        label_withDraw->setObjectName(QString::fromUtf8("label_withDraw"));

        verticalLayout->addWidget(label_withDraw, 0, Qt::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_withdraw_20 = new QPushButton(verticalLayoutWidget);
        btn_withdraw_20->setObjectName(QString::fromUtf8("btn_withdraw_20"));

        horizontalLayout->addWidget(btn_withdraw_20);

        btn_withdraw_40 = new QPushButton(verticalLayoutWidget);
        btn_withdraw_40->setObjectName(QString::fromUtf8("btn_withdraw_40"));

        horizontalLayout->addWidget(btn_withdraw_40);

        btn_withdraw_60 = new QPushButton(verticalLayoutWidget);
        btn_withdraw_60->setObjectName(QString::fromUtf8("btn_withdraw_60"));

        horizontalLayout->addWidget(btn_withdraw_60);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_withdraw_100 = new QPushButton(verticalLayoutWidget);
        btn_withdraw_100->setObjectName(QString::fromUtf8("btn_withdraw_100"));

        horizontalLayout_2->addWidget(btn_withdraw_100);

        btn_withdraw_200 = new QPushButton(verticalLayoutWidget);
        btn_withdraw_200->setObjectName(QString::fromUtf8("btn_withdraw_200"));

        horizontalLayout_2->addWidget(btn_withdraw_200);

        btn_withdraw_500 = new QPushButton(verticalLayoutWidget);
        btn_withdraw_500->setObjectName(QString::fromUtf8("btn_withdraw_500"));

        horizontalLayout_2->addWidget(btn_withdraw_500);


        verticalLayout->addLayout(horizontalLayout_2);

        btn_withdraw_return = new QPushButton(verticalLayoutWidget);
        btn_withdraw_return->setObjectName(QString::fromUtf8("btn_withdraw_return"));

        verticalLayout->addWidget(btn_withdraw_return);


        retranslateUi(WithdrawMoneyWindow);

        QMetaObject::connectSlotsByName(WithdrawMoneyWindow);
    } // setupUi

    void retranslateUi(QWidget *WithdrawMoneyWindow)
    {
        WithdrawMoneyWindow->setWindowTitle(QCoreApplication::translate("WithdrawMoneyWindow", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("WithdrawMoneyWindow", "Nosta Rahaa", nullptr));
        label_withDraw->setText(QCoreApplication::translate("WithdrawMoneyWindow", "Valitse Summa", nullptr));
        btn_withdraw_20->setText(QCoreApplication::translate("WithdrawMoneyWindow", "20e", nullptr));
        btn_withdraw_40->setText(QCoreApplication::translate("WithdrawMoneyWindow", "40e", nullptr));
        btn_withdraw_60->setText(QCoreApplication::translate("WithdrawMoneyWindow", "60e", nullptr));
        btn_withdraw_100->setText(QCoreApplication::translate("WithdrawMoneyWindow", "100e", nullptr));
        btn_withdraw_200->setText(QCoreApplication::translate("WithdrawMoneyWindow", "200e", nullptr));
        btn_withdraw_500->setText(QCoreApplication::translate("WithdrawMoneyWindow", "500e", nullptr));
        btn_withdraw_return->setText(QCoreApplication::translate("WithdrawMoneyWindow", "Palaa Takaisin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WithdrawMoneyWindow: public Ui_WithdrawMoneyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAWMONEYWINDOW_H
