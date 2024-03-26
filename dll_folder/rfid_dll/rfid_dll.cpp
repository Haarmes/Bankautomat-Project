#include "rfid_dll.h"

Rfid_dll::Rfid_dll(QObject * parent): QObject(parent) {

    qDebug()<<"RFID DLL luotu!";
    _serial = new QSerialPort();
    _serial->setPortName(portname);
    _serial->setBaudRate(QSerialPort::Baud9600);
    _serial->setDataBits(QSerialPort::Data8);
    _serial->setParity(QSerialPort::NoParity);
    _serial->setStopBits(QSerialPort::OneStop);
    qDebug()<< "_serial asetukset alustettu";
    connect(this, SIGNAL(rfidSignal(QString)), this->parent(), SLOT(handleRfid(QString)));


}

Rfid_dll::~Rfid_dll()
{
    qDebug()<<"RFID DLL Tuhottu";
}

void Rfid_dll::rfidConnect()
{

    if(_serial->open(QIODevice::ReadOnly)){
        qDebug()<<"port reading opened at port: "<< portname;
        connect(_serial, SIGNAL(readyRead()), this, SLOT(handleRfidReadyread()));
    }
    else{
        qDebug()<<"couldn't open a port" << _serial->error();
    }
    //_serial->waitForReadyRead(1);


}

void Rfid_dll::rfidDisconnect()
{
    // katkaistaan yhteys että kortteja ei voida enään lukea
    disconnect(_serial, SIGNAL(readyRead()), this , SLOT(handleRfidReadyread()));
}

void Rfid_dll::handleRfidReadyread()
{
    qDebug()<<"readyReadHandler";

    // luetaan data serialista
    QString carddata = _serial->readAll();

    // Pilkotaan data siten että rivinvaihdot sun muut jää pois
    carddata.chop(4);
    carddata.remove(0,4);

    //emitoidaan signaali ja kortin numero main exeen "MainWindow"
    emit rfidSignal(carddata);
}
