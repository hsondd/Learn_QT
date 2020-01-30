#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    cnt = 0;

    this->timer_cnt = new QTimer(this);
    this->timer_cnt->setInterval(1000);

    connect(this->timer_cnt,SIGNAL(timeout()),this,SLOT(update_cnt()));

}

void MainWindow::update_cnt(){
    cnt++;
    ui->lblTime->setText(QString::number(cnt));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnStart_clicked()
{
    this->timer_cnt->start();
}

void MainWindow::on_btnStop_clicked()
{
    this->timer_cnt->stop();
}

void MainWindow::on_btnReset_clicked()
{
    cnt = 0;
    ui->lblTime->setText(QString::number(cnt));
}

void MainWindow::on_btnClose_clicked()
{
    QTimer::singleShot(5000,this,SLOT(quit()));
//    this->close();
    this->timer_cnt->start();
}

void MainWindow::quit()
{
    this->close();
}
