#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "printmsg.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnStart_clicked();

    void on_btnShow_clicked();

    void on_btnStartThread_clicked();

    void on_btnStop_clicked();

private:
    Ui::MainWindow *ui;
    printMsg * pm;
};

#endif // MAINWINDOW_H
