# QextSerialPort
QextSerialPort provides an interface to old fashioned serial ports for Qt-based applications.

# How to use :

It's very easy to compile QextSerialPort directly into your application.

Download the source code, and put it in any location you like.

 Run following command to generate library.

          qmake
          make (or nmake)
          sudo make install (or nmake install)

Add following line to your project's file

          CONFIG += extserialport

Using QextSerialPort in your code. 

            #include "qextserialport.h"
            ....
            QextSerialPort * port = new QextSerialPort();
            ....
