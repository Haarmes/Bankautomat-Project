#ifndef RFID_DLL_H
#define RFID_DLL_H
#include <QDebug>
#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>



#include "rfid_dll_global.h"

class RFID_DLL_EXPORT Rfid_dll : public QObject
{
    Q_OBJECT
public:
    Rfid_dll(QObject * parent);
    ~Rfid_dll();
    void rfidConnect();
    void rfidDisconnect();

private:
    QSerialPort * _serial;
    QString portname = "COM3";      // Tähän laitetaan oikea portin numero
signals:
    void rfidSignal(QString);

private slots:
    void handleRfidReadyread();
};

#endif // RFID_DLL_H
