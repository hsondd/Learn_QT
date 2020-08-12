#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
//    void about
//    void aboutQT
//    StandardButton critical
//    StandardButton information
//    StandardButton question
//    StandardButton warning
//    QMessageBox::information(this, "My title", "This is custom message");
    QMessageBox::StandardButton reply = QMessageBox::question(this, "My title", "This is custom message",
                          QMessageBox::No | QMessageBox::Yes);
    if (reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
    else
    {
        qDebug() << "No is clicked";
    }

}
