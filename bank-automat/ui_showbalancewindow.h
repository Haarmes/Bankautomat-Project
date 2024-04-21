/********************************************************************************
** Form generated from reading UI file 'showbalancewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWBALANCEWINDOW_H
#define UI_SHOWBALANCEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowBalanceWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *nameLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *saldoLabel;
    QLabel *label_6;
    QTableView *tableView;

    void setupUi(QWidget *ShowBalanceWindow)
    {
        if (ShowBalanceWindow->objectName().isEmpty())
            ShowBalanceWindow->setObjectName(QString::fromUtf8("ShowBalanceWindow"));
        ShowBalanceWindow->resize(400, 300);
        QFont font;
        font.setPointSize(14);
        ShowBalanceWindow->setFont(font);
        verticalLayoutWidget = new QWidget(ShowBalanceWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 0, 231, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3, 0, Qt::AlignHCenter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        nameLabel = new QLabel(verticalLayoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout_2->addWidget(nameLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        saldoLabel = new QLabel(verticalLayoutWidget);
        saldoLabel->setObjectName(QString::fromUtf8("saldoLabel"));

        horizontalLayout->addWidget(saldoLabel);


        verticalLayout->addLayout(horizontalLayout);

        label_6 = new QLabel(ShowBalanceWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 110, 211, 41));
        QFont font1;
        font1.setPointSize(11);
        label_6->setFont(font1);
        tableView = new QTableView(ShowBalanceWindow);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 150, 381, 141));

        retranslateUi(ShowBalanceWindow);

        QMetaObject::connectSlotsByName(ShowBalanceWindow);
    } // setupUi

    void retranslateUi(QWidget *ShowBalanceWindow)
    {
        ShowBalanceWindow->setWindowTitle(QCoreApplication::translate("ShowBalanceWindow", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("ShowBalanceWindow", "Saldo ja Tiedot", nullptr));
        label_2->setText(QCoreApplication::translate("ShowBalanceWindow", "Nimi", nullptr));
        nameLabel->setText(QString());
        label->setText(QCoreApplication::translate("ShowBalanceWindow", "Saldo", nullptr));
        saldoLabel->setText(QString());
        label_6->setText(QCoreApplication::translate("ShowBalanceWindow", "5 viimeist\303\244 tilitapahtumaa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowBalanceWindow: public Ui_ShowBalanceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWBALANCEWINDOW_H
