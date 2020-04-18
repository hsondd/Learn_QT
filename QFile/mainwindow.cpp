#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDialog>
#include <QFileDialog>


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
    QString dirPath = QFileDialog::getExistingDirectory(this, "open directory");
    if(!dirPath.isEmpty())
        ui->lblDirectory->setText(dirPath);
}

void MainWindow::on_pushButton_2_clicked()
{
    QString path = QFileDialog::getOpenFileName(
                this,
                "open file",
                "//home",
                "Text File(*.txt):: All file(*.*)");
    ui->lblOpenFile->setText(path);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString path = QFileDialog::getSaveFileName(
                this,
                "save file",
                "",
                "Text File (*.txt)");
    ui->lblSaveFile->setText(path);
}
