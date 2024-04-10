/********************************************************************************
** Form generated from reading UI file 'pinui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINUI_H
#define UI_PINUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pinUI
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *btnEnter;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn6;
    QPushButton *btnCancel;
    QPushButton *btn9;
    QPushButton *btn3;
    QPushButton *btn0;
    QPushButton *btn5;
    QLineEdit *userPINfield;
    QPushButton *btn4;
    QPushButton *btn7;
    QPushButton *btn8;

    void setupUi(QDialog *pinUI)
    {
        if (pinUI->objectName().isEmpty())
            pinUI->setObjectName(QString::fromUtf8("pinUI"));
        pinUI->resize(623, 482);
        label = new QLabel(pinUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 100, 118, 27));
        gridLayoutWidget = new QWidget(pinUI);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(160, 140, 256, 208));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btnEnter = new QPushButton(gridLayoutWidget);
        btnEnter->setObjectName(QString::fromUtf8("btnEnter"));

        gridLayout_2->addWidget(btnEnter, 4, 2, 1, 1);

        btn1 = new QPushButton(gridLayoutWidget);
        btn1->setObjectName(QString::fromUtf8("btn1"));

        gridLayout_2->addWidget(btn1, 1, 0, 1, 1);

        btn2 = new QPushButton(gridLayoutWidget);
        btn2->setObjectName(QString::fromUtf8("btn2"));

        gridLayout_2->addWidget(btn2, 1, 1, 1, 1);

        btn6 = new QPushButton(gridLayoutWidget);
        btn6->setObjectName(QString::fromUtf8("btn6"));

        gridLayout_2->addWidget(btn6, 2, 2, 1, 1);

        btnCancel = new QPushButton(gridLayoutWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        gridLayout_2->addWidget(btnCancel, 4, 0, 1, 1);

        btn9 = new QPushButton(gridLayoutWidget);
        btn9->setObjectName(QString::fromUtf8("btn9"));

        gridLayout_2->addWidget(btn9, 3, 2, 1, 1);

        btn3 = new QPushButton(gridLayoutWidget);
        btn3->setObjectName(QString::fromUtf8("btn3"));

        gridLayout_2->addWidget(btn3, 1, 2, 1, 1);

        btn0 = new QPushButton(gridLayoutWidget);
        btn0->setObjectName(QString::fromUtf8("btn0"));

        gridLayout_2->addWidget(btn0, 4, 1, 1, 1);

        btn5 = new QPushButton(gridLayoutWidget);
        btn5->setObjectName(QString::fromUtf8("btn5"));

        gridLayout_2->addWidget(btn5, 2, 1, 1, 1);

        userPINfield = new QLineEdit(gridLayoutWidget);
        userPINfield->setObjectName(QString::fromUtf8("userPINfield"));

        gridLayout_2->addWidget(userPINfield, 0, 0, 1, 3);

        btn4 = new QPushButton(gridLayoutWidget);
        btn4->setObjectName(QString::fromUtf8("btn4"));

        gridLayout_2->addWidget(btn4, 2, 0, 1, 1);

        btn7 = new QPushButton(gridLayoutWidget);
        btn7->setObjectName(QString::fromUtf8("btn7"));

        gridLayout_2->addWidget(btn7, 3, 0, 1, 1);

        btn8 = new QPushButton(gridLayoutWidget);
        btn8->setObjectName(QString::fromUtf8("btn8"));

        gridLayout_2->addWidget(btn8, 3, 1, 1, 1);


        retranslateUi(pinUI);

        QMetaObject::connectSlotsByName(pinUI);
    } // setupUi

    void retranslateUi(QDialog *pinUI)
    {
        pinUI->setWindowTitle(QCoreApplication::translate("pinUI", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("pinUI", "SY\303\226T\303\204 PIN KOODI", nullptr));
        btnEnter->setText(QCoreApplication::translate("pinUI", "ENTER", nullptr));
        btn1->setText(QCoreApplication::translate("pinUI", "1", nullptr));
        btn2->setText(QCoreApplication::translate("pinUI", "2", nullptr));
        btn6->setText(QCoreApplication::translate("pinUI", "6", nullptr));
        btnCancel->setText(QCoreApplication::translate("pinUI", "CANCEL", nullptr));
        btn9->setText(QCoreApplication::translate("pinUI", "9", nullptr));
        btn3->setText(QCoreApplication::translate("pinUI", "3", nullptr));
        btn0->setText(QCoreApplication::translate("pinUI", "0", nullptr));
        btn5->setText(QCoreApplication::translate("pinUI", "5", nullptr));
        btn4->setText(QCoreApplication::translate("pinUI", "4", nullptr));
        btn7->setText(QCoreApplication::translate("pinUI", "7", nullptr));
        btn8->setText(QCoreApplication::translate("pinUI", "8", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pinUI: public Ui_pinUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINUI_H
