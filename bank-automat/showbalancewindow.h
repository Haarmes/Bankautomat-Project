#ifndef SHOWBALANCEWINDOW_H
#define SHOWBALANCEWINDOW_H

#include <QWidget>

namespace Ui {
class ShowBalanceWindow;
}

class ShowBalanceWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ShowBalanceWindow(QWidget *parent = nullptr);
    ~ShowBalanceWindow();

private:
    Ui::ShowBalanceWindow *ui;
};

#endif // SHOWBALANCEWINDOW_H
