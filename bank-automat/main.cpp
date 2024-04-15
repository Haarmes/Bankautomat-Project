#include "mainwindow.h"
#include "bankmenuwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w; // RFIDwindow
    w.show();
    return a.exec();
}
