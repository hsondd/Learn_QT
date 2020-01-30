#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->statusBar->hide();
    ui->mainToolBar->hide();
    this->setFixedSize(440,111);

    updateTime();

    this->tmr = new QTimer(this);
    tmr->setInterval(500);

    QObject::connect(this->tmr,SIGNAL(timeout()),this,SLOT(updateTime()));
    tmr->start();
}

bool flash;
void MainWindow::updateTime(){
    unsigned char hour, minute, second;
    hour = QTime::currentTime().hour();
    minute = QTime::currentTime().minute();
    second = QTime::currentTime().second();
    flash = !flash;

    if(flash == true)
    {
    ui->lblTime->setText(QString("0" + QString::number(hour)).right(2)+ ":"
                         + QString("0" + QString::number(minute)).right(2) + ":"
                         + QString("0" + QString::number(second)).right(2));

    }
    if(flash == false)
    {
        ui->lblTime->setText(QString("0" + QString::number(hour)).right(2)+ " "
                             + QString("0" + QString::number(minute)).right(2) + " "
                             + QString("0" + QString::number(second)).right(2));

    }
}
MainWindow::~MainWindow()
{
    delete ui;
}
