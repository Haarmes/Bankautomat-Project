#ifndef DEBOSITMONEYWINDOW_H
#define DEBOSITMONEYWINDOW_H

#include <QWidget>

namespace Ui {
class DebositMoneyWindow;
}

class DebositMoneyWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DebositMoneyWindow(QWidget *parent = nullptr);
    ~DebositMoneyWindow();

private:
    Ui::DebositMoneyWindow *ui;
};

#endif // DEBOSITMONEYWINDOW_H
