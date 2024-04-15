#ifndef SHOWBALANCEWINDOW_H
#define SHOWBALANCEWINDOW_H

#include <QDialog>

namespace Ui {
class ShowBalanceWindow;
}

class ShowBalanceWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ShowBalanceWindow(QWidget *parent = nullptr);
    ~ShowBalanceWindow();

private:
    Ui::ShowBalanceWindow *ui;
};

#endif // SHOWBALANCEWINDOW_H
