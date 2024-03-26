#include "rfid_dll.h"

Rfid_dll::Rfid_dll(QObject * parent): QObject(parent) {

    qDebug()<<"RFID DLL luotu!";

    _serial = new QSerialPort();
    _serial->setPortName(portname);
    _serial->setBaudRate(QSerialPort::Baud9600);
    _serial->setDataBits(QSerialPort::Data8);
    _serial->setParity(QSerialPort::NoParity);
    _serial->setStopBits(QSerialPort::OneStop);
    if(_serial->open(QIODevice::ReadOnly)){
        qDebug()<<"port reading opened at port: "<< portname;
    }
    else{
        qDebug()<<"couldn't open a port";
    }
    //serial->waitForReadyRead(1);
    //connect(this, SIGNAL serial.readyRead(), this, SLOT handleRfidReadyread());
}

Rfid_dll::~Rfid_dll()
{
    qDebug()<<"RFID DLL Tuhottu";
}

void Rfid_dll::handleRfidReadyread()
{
    qDebug()<<"readyReadHandler";
}
