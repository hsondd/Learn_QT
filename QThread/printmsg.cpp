#include "printmsg.h"
#include <QDebug>

printMsg::printMsg(QObject *parent) :
    QThread(parent)
{
    isStop = false;
}

void printMsg::run()
{
    for (int i = 0; i < 1000000; i++)
    {
        qDebug() << i << "Hello world";
        if (isStop == true)
             break;
    }
    qDebug() << "Finished";
}

void printMsg::stop()
{
    isStop = true;
}
