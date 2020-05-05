#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qserialport.h"

QSerialPort * serialPort;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    serialPort = new QSerialPort(this);

    //Cau hinh cong com
    serialPort->setPortName("com1");
    serialPort->setBaudRate(QSerialPort::Baud9600);
    serialPort->setDataBits(QSerialPort::Data8);
    serialPort->setParity(QSerialPort::NoParity);
    serialPort->setStopBits(QSerialPort::OneStop);

    serialPort->open(QIODevice::ReadWrite);
    connect(serialPort, SIGNAL(readyRead()), this, SLOT(serialport_read()));
}

MainWindow::~MainWindow()
{
    delete ui;
    serialPort->close();
}

void MainWindow::on_pushButton_clicked()
{
    serialPort->write(ui->ledSend->text().toStdString().data());
}

void MainWindow::serialport_read()
{
    ui->pteReceive->moveCursor(QTextCursor::End);
    ui->pteReceive->insertPlainText(serialPort->readAll());
}
