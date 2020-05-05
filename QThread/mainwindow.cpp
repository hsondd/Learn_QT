#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pm = NULL;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnStart_clicked()
{
    for (int i = 0; i < 1000000; i++)
    {
        qDebug() << "Hello world" << i;
    }
    qDebug() << "Finish";
}

void MainWindow::on_btnShow_clicked()
{
    QMessageBox::information(this, "Info", "You're clicked on a button");
}

void MainWindow::on_btnStartThread_clicked()
{
    pm = new printMsg();
    pm->start();
}

void MainWindow::on_btnStop_clicked()
{
    pm->stop();
}
