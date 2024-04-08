#ifndef WITHDRAWMONEYWINDOW_H
#define WITHDRAWMONEYWINDOW_H

#include <QWidget>

namespace Ui {
class WithdrawMoneyWindow;
}

class WithdrawMoneyWindow : public QWidget
{
    Q_OBJECT

public:
    explicit WithdrawMoneyWindow(QWidget *parent = nullptr);
    ~WithdrawMoneyWindow();

private:
    Ui::WithdrawMoneyWindow *ui;
};

#endif // WITHDRAWMONEYWINDOW_H
