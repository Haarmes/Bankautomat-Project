#ifndef BANKMENUWINDOW_H
#define BANKMENUWINDOW_H


#include <QMainWindow>
#include <QWidget>

namespace Ui {
class BankMenuWindow;
}

class BankMenuWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BankMenuWindow(QWidget *parent = nullptr);
    ~BankMenuWindow();

private slots:
    void buttonHandler();

private:
    Ui::BankMenuWindow *ui;
};

#endif // BANKMENUWINDOW_H
