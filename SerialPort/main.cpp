#include <QCoreApplication>
#include<opencv2/opencv.hpp>
#include<iostream>
#include<qextserialport.h>

using namespace cv;

using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    bool port_is_open=false;
    QextSerialPort *port=new QextSerialPort("ttySAC0",QextSerialPort::EventDriven);
    port->setBaudRate(BAUD9600);
    port->setDataBits(DATA_8);
    port->setParity(PAR_NONE);
    port->setStopBits(STOP_1);
    port->setFlowControl(FLOW_OFF);

    if (port->open(QIODevice::ReadWrite))
    {
        //Connected
        cout << "device opened sucessfully" << endl;
        port_is_open=true;
    }
    else
    {
        //Open error

        cout << "device failed to open:" << endl;
        port_is_open=false;
    }

    double zero=0,one=1;


    for(int i=0; i<10000;i++){
        port->flush();
        cout<<i<<endl;
        if(i%2==0)
        port->write(QByteArray(reinterpret_cast<const char*>(&zero)));
        port->write("hello0");
        else
        port->write(QByteArray(reinterpret_cast<const char*>(&one)));
    }
    return a.exec();
}
