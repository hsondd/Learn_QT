/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lblTime;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QPushButton *btnReset;
    QPushButton *btnClose;
    QLabel *lblBg;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblTime = new QLabel(centralWidget);
        lblTime->setObjectName(QStringLiteral("lblTime"));
        lblTime->setGeometry(QRect(130, 40, 161, 111));
        QFont font;
        font.setFamily(QStringLiteral("DSEG7 Classic"));
        font.setPointSize(80);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        lblTime->setFont(font);
        lblTime->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        btnStart = new QPushButton(centralWidget);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setGeometry(QRect(70, 170, 80, 23));
        btnStop = new QPushButton(centralWidget);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        btnStop->setGeometry(QRect(170, 170, 80, 23));
        btnReset = new QPushButton(centralWidget);
        btnReset->setObjectName(QStringLiteral("btnReset"));
        btnReset->setGeometry(QRect(260, 170, 80, 23));
        btnClose = new QPushButton(centralWidget);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setGeometry(QRect(310, 220, 80, 23));
        lblBg = new QLabel(centralWidget);
        lblBg->setObjectName(QStringLiteral("lblBg"));
        lblBg->setGeometry(QRect(130, 40, 161, 111));
        lblBg->setFont(font);
        lblBg->setStyleSheet(QLatin1String("QLabel{\n"
"	color: rgb(198, 198, 198);\n"
"}"));
        lblBg->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        MainWindow->setCentralWidget(centralWidget);
        lblBg->raise();
        lblTime->raise();
        btnStart->raise();
        btnStop->raise();
        btnReset->raise();
        btnClose->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        lblTime->setText(QApplication::translate("MainWindow", "0", 0));
        btnStart->setText(QApplication::translate("MainWindow", "Start", 0));
        btnStop->setText(QApplication::translate("MainWindow", "Stop", 0));
        btnReset->setText(QApplication::translate("MainWindow", "Reset", 0));
        btnClose->setText(QApplication::translate("MainWindow", "Close", 0));
        lblBg->setText(QApplication::translate("MainWindow", "8", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
