#ifndef WITHDRAWMONEYWINDOW_H
#define WITHDRAWMONEYWINDOW_H

#include <QDialog>

namespace Ui {
class WithdrawMoneyWindow;
}

class WithdrawMoneyWindow : public QDialog
{
    Q_OBJECT

public:
    explicit WithdrawMoneyWindow(QWidget *parent = nullptr);
    ~WithdrawMoneyWindow();

private:
    Ui::WithdrawMoneyWindow *ui;
};

#endif // WITHDRAWMONEYWINDOW_H
