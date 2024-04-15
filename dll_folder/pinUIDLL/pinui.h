#ifndef PINUI_H
#define PINUI_H

#include <QDialog>
#include "pinUIDLL_global.h"
#include <QDebug>
#include <QPushButton>
#include <QList>


namespace Ui {
class pinUI;
}

class PINUIDLL_EXPORT pinUI : public QDialog
{
    Q_OBJECT

public:
    explicit pinUI(QWidget *parent = nullptr);
    ~pinUI();

signals:
    void PinEntered(const QString pin);

private slots:
    void onbtnEnterClicked();
    void onbtnCancelClicked();
    void numberClicked();

private:
    Ui::pinUI *ui;
    QString userPIN;



};

#endif // PINUI_H
