/********************************************************************************
** Form generated from reading UI file 'transactionwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONWINDOW_H
#define UI_TRANSACTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransactionWindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *transactionLabel;
    QTableView *transactionTableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnNewer;
    QPushButton *btnOlder;

    void setupUi(QWidget *TransactionWindow)
    {
        if (TransactionWindow->objectName().isEmpty())
            TransactionWindow->setObjectName(QString::fromUtf8("TransactionWindow"));
        TransactionWindow->resize(403, 300);
        layoutWidget = new QWidget(TransactionWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 381, 281));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        transactionLabel = new QLabel(layoutWidget);
        transactionLabel->setObjectName(QString::fromUtf8("transactionLabel"));
        QFont font;
        font.setPointSize(17);
        transactionLabel->setFont(font);
        transactionLabel->setScaledContents(false);
        transactionLabel->setAlignment(Qt::AlignCenter);
        transactionLabel->setIndent(-1);

        verticalLayout->addWidget(transactionLabel);

        transactionTableView = new QTableView(layoutWidget);
        transactionTableView->setObjectName(QString::fromUtf8("transactionTableView"));

        verticalLayout->addWidget(transactionTableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnNewer = new QPushButton(layoutWidget);
        btnNewer->setObjectName(QString::fromUtf8("btnNewer"));
        btnNewer->setMaximumSize(QSize(191, 16777215));
        QFont font1;
        font1.setPointSize(12);
        btnNewer->setFont(font1);

        horizontalLayout->addWidget(btnNewer);

        btnOlder = new QPushButton(layoutWidget);
        btnOlder->setObjectName(QString::fromUtf8("btnOlder"));
        btnOlder->setMaximumSize(QSize(191, 16777215));
        btnOlder->setFont(font1);

        horizontalLayout->addWidget(btnOlder);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TransactionWindow);

        QMetaObject::connectSlotsByName(TransactionWindow);
    } // setupUi

    void retranslateUi(QWidget *TransactionWindow)
    {
        TransactionWindow->setWindowTitle(QCoreApplication::translate("TransactionWindow", "Form", nullptr));
        transactionLabel->setText(QCoreApplication::translate("TransactionWindow", "Tilitapahtumat", nullptr));
        btnNewer->setText(QCoreApplication::translate("TransactionWindow", "Uudemmat", nullptr));
        btnOlder->setText(QCoreApplication::translate("TransactionWindow", "Vanhemmat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransactionWindow: public Ui_TransactionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONWINDOW_H
