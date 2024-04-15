#ifndef DEBOSITMONEYWINDOW_H
#define DEBOSITMONEYWINDOW_H

#include <QDialog>

namespace Ui {
class DebositMoneyWindow;
}

class DebositMoneyWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DebositMoneyWindow(QWidget *parent = nullptr);
    ~DebositMoneyWindow();

private:
    Ui::DebositMoneyWindow *ui;
};

#endif // DEBOSITMONEYWINDOW_H
