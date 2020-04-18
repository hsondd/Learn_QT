#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"Information","this is information box");
}

void MainWindow::on_pushButton_2_clicked()
{
    if (QMessageBox::question(this, "question", "ban muon chich ko?",QMessageBox::Yes|QMessageBox::No) == QMessageBox::Yes)
    {
       qDebug() << "nung lon";
    }
    else
       qDebug() << "yeu sinh ly";


}
