#include <QCoreApplication>
#include "mythread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyThread mThread1, mThread2, mThread3;
    mThread1.name = "mThread1";
    mThread2.name = "mThread2";
    mThread3.name = "mThread3";

    mThread1.run();
    mThread2.run();
    mThread3.run();

    return a.exec();
}
