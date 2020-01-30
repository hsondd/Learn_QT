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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *lblBg;
    QLabel *lblTime;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(440, 111);
        MainWindow->setStyleSheet(QLatin1String("QGroupBox{\n"
"	border: 1px solid gray;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, -10, 441, 121));
        groupBox->setStyleSheet(QLatin1String("QGroupBox{\n"
"	border: 10px solid gray;\n"
"	border-radius: 10px;\n"
"	margin-top: 0.5em;\n"
"	\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	subcontrol-origin: margin;\n"
"	left: 10px;\n"
"	padding: 0 3px 0 3px;\n"
"}"));
        lblBg = new QLabel(groupBox);
        lblBg->setObjectName(QStringLiteral("lblBg"));
        lblBg->setGeometry(QRect(10, 20, 421, 81));
        QFont font;
        font.setFamily(QStringLiteral("DSEG7 Classic"));
        font.setPointSize(60);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        lblBg->setFont(font);
        lblBg->setStyleSheet(QStringLiteral("color: rgb(85, 85, 85);"));
        lblBg->setMidLineWidth(0);
        lblBg->setTextFormat(Qt::AutoText);
        lblTime = new QLabel(groupBox);
        lblTime->setObjectName(QStringLiteral("lblTime"));
        lblTime->setGeometry(QRect(10, 20, 421, 81));
        lblTime->setFont(font);
        lblTime->setStyleSheet(QLatin1String("QLabel{\n"
"color: rgb(255, 255, 255);\n"
"}\n"
""));
        lblTime->setMidLineWidth(0);
        lblTime->setTextFormat(Qt::AutoText);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 440, 20));
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
        groupBox->setTitle(QString());
        lblBg->setText(QApplication::translate("MainWindow", "88:88:88", 0));
        lblTime->setText(QApplication::translate("MainWindow", "12:00:00", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
