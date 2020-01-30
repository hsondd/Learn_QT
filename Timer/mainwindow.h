#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

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
        void update_cnt();

        void on_btnStart_clicked();

        void on_btnStop_clicked();

        void on_btnReset_clicked();

        void on_btnClose_clicked();

        void quit();
private:
    Ui::MainWindow *ui;

    QTimer *timer_cnt;
    unsigned int cnt;
};

#endif // MAINWINDOW_H
