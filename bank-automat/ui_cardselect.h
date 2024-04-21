/********************************************************************************
** Form generated from reading UI file 'cardselect.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDSELECT_H
#define UI_CARDSELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CardSelect
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnDebitSelect;
    QPushButton *btnCreditSelect;

    void setupUi(QWidget *CardSelect)
    {
        if (CardSelect->objectName().isEmpty())
            CardSelect->setObjectName(QString::fromUtf8("CardSelect"));
        CardSelect->resize(400, 300);
        QFont font;
        font.setPointSize(14);
        CardSelect->setFont(font);
        verticalLayoutWidget = new QWidget(CardSelect);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 9, 381, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnDebitSelect = new QPushButton(verticalLayoutWidget);
        btnDebitSelect->setObjectName(QString::fromUtf8("btnDebitSelect"));

        horizontalLayout->addWidget(btnDebitSelect);

        btnCreditSelect = new QPushButton(verticalLayoutWidget);
        btnCreditSelect->setObjectName(QString::fromUtf8("btnCreditSelect"));

        horizontalLayout->addWidget(btnCreditSelect);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CardSelect);

        QMetaObject::connectSlotsByName(CardSelect);
    } // setupUi

    void retranslateUi(QWidget *CardSelect)
    {
        CardSelect->setWindowTitle(QCoreApplication::translate("CardSelect", "Form", nullptr));
        label->setText(QCoreApplication::translate("CardSelect", "Valitse Kortti", nullptr));
        btnDebitSelect->setText(QCoreApplication::translate("CardSelect", "Debit", nullptr));
        btnCreditSelect->setText(QCoreApplication::translate("CardSelect", "Credit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CardSelect: public Ui_CardSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDSELECT_H
