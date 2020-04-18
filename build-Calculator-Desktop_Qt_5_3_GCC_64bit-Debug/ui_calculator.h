/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *MemClear;
    QPushButton *Button7;
    QPushButton *Button2;
    QPushButton *Clear;
    QPushButton *ChangeSign;
    QPushButton *Multiply;
    QPushButton *Add;
    QPushButton *Button0;
    QPushButton *Button4;
    QPushButton *Button6;
    QPushButton *Button5;
    QPushButton *Equals;
    QPushButton *Button8;
    QPushButton *Subtract;
    QPushButton *Button1;
    QPushButton *MemGet;
    QPushButton *Devide;
    QPushButton *MemAdd;
    QPushButton *Button9;
    QPushButton *Button3;
    QLineEdit *Display;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QStringLiteral("Calculator"));
        Calculator->resize(507, 306);
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        MemClear = new QPushButton(centralWidget);
        MemClear->setObjectName(QStringLiteral("MemClear"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy);
        MemClear->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#FFBC00;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(MemClear, 2, 4, 1, 1);

        Button7 = new QPushButton(centralWidget);
        Button7->setObjectName(QStringLiteral("Button7"));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#C0C0C0;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(Button7, 1, 0, 1, 1);

        Button2 = new QPushButton(centralWidget);
        Button2->setObjectName(QStringLiteral("Button2"));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#C0C0C0;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(Button2, 3, 1, 1, 1);

        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QStringLiteral("Clear"));
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#C0C0C0;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(Clear, 4, 0, 1, 1);

        ChangeSign = new QPushButton(centralWidget);
        ChangeSign->setObjectName(QStringLiteral("ChangeSign"));
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#C0C0C0;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(ChangeSign, 4, 2, 1, 1);

        Multiply = new QPushButton(centralWidget);
        Multiply->setObjectName(QStringLiteral("Multiply"));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#FFBC00;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 2, 3, 1, 1);

        Add = new QPushButton(centralWidget);
        Add->setObjectName(QStringLiteral("Add"));
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#FFBC00;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(Add, 3, 3, 1, 1);

        Button0 = new QPushButton(centralWidget);
        Button0->setObjectName(QStringLiteral("Button0"));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#C0C0C0;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(Button0, 4, 1, 1, 1);

        Button4 = new QPushButton(centralWidget);
        Button4->setObjectName(QStringLiteral("Button4"));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#C0C0C0;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(Button4, 2, 0, 1, 1);

        Button6 = new QPushButton(centralWidget);
        Button6->setObjectName(QStringLiteral("Button6"));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#C0C0C0;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(Button6, 2, 2, 1, 1);

        Button5 = new QPushButton(centralWidget);
        Button5->setObjectName(QStringLiteral("Button5"));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#C0C0C0;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(Button5, 2, 1, 1, 1);

        Equals = new QPushButton(centralWidget);
        Equals->setObjectName(QStringLiteral("Equals"));
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#FFBC00;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(Equals, 4, 4, 1, 1);

        Button8 = new QPushButton(centralWidget);
        Button8->setObjectName(QStringLiteral("Button8"));
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#C0C0C0;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(Button8, 1, 1, 1, 1);

        Subtract = new QPushButton(centralWidget);
        Subtract->setObjectName(QStringLiteral("Subtract"));
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#FFBC00;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 4, 3, 1, 1);

        Button1 = new QPushButton(centralWidget);
        Button1->setObjectName(QStringLiteral("Button1"));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#C0C0C0;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(Button1, 3, 0, 1, 1);

        MemGet = new QPushButton(centralWidget);
        MemGet->setObjectName(QStringLiteral("MemGet"));
        sizePolicy.setHeightForWidth(MemGet->sizePolicy().hasHeightForWidth());
        MemGet->setSizePolicy(sizePolicy);
        MemGet->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#FFBC00;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(MemGet, 3, 4, 1, 1);

        Devide = new QPushButton(centralWidget);
        Devide->setObjectName(QStringLiteral("Devide"));
        sizePolicy.setHeightForWidth(Devide->sizePolicy().hasHeightForWidth());
        Devide->setSizePolicy(sizePolicy);
        Devide->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#FFBC00;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(Devide, 1, 3, 1, 1);

        MemAdd = new QPushButton(centralWidget);
        MemAdd->setObjectName(QStringLiteral("MemAdd"));
        sizePolicy.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy);
        MemAdd->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#FFBC00;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(MemAdd, 1, 4, 1, 1);

        Button9 = new QPushButton(centralWidget);
        Button9->setObjectName(QStringLiteral("Button9"));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#C0C0C0;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(Button9, 1, 2, 1, 1);

        Button3 = new QPushButton(centralWidget);
        Button3->setObjectName(QStringLiteral("Button3"));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QLatin1String("QPushButton {\n"
"		background-color:#C0C0C0;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color:#A9A9A9;\n"
"		border:1px solid gray;\n"
"		padding:5px;\n"
"}"));

        gridLayout->addWidget(Button3, 3, 2, 1, 1);

        Display = new QLineEdit(centralWidget);
        Display->setObjectName(QStringLiteral("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(32);
        Display->setFont(font);
        Display->setStyleSheet(QLatin1String("QLineEdit{\n"
"		background-color:gray;\n"
"		border:1px solid gray;\n"
"		color:#ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calculator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 507, 25));
        Calculator->setMenuBar(menuBar);
        statusBar = new QStatusBar(Calculator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Calculator->setStatusBar(statusBar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", 0));
        MemClear->setText(QApplication::translate("Calculator", "M-", 0));
        Button7->setText(QApplication::translate("Calculator", "7", 0));
        Button2->setText(QApplication::translate("Calculator", "2", 0));
        Clear->setText(QApplication::translate("Calculator", "AC", 0));
        ChangeSign->setText(QApplication::translate("Calculator", "+/-", 0));
        Multiply->setText(QApplication::translate("Calculator", "*", 0));
        Add->setText(QApplication::translate("Calculator", "+", 0));
        Button0->setText(QApplication::translate("Calculator", "0", 0));
        Button4->setText(QApplication::translate("Calculator", "4", 0));
        Button6->setText(QApplication::translate("Calculator", "6", 0));
        Button5->setText(QApplication::translate("Calculator", "5", 0));
        Equals->setText(QApplication::translate("Calculator", "=", 0));
        Button8->setText(QApplication::translate("Calculator", "8", 0));
        Subtract->setText(QApplication::translate("Calculator", "-", 0));
        Button1->setText(QApplication::translate("Calculator", "1", 0));
        MemGet->setText(QApplication::translate("Calculator", "M", 0));
        Devide->setText(QApplication::translate("Calculator", "/", 0));
        MemAdd->setText(QApplication::translate("Calculator", "M+", 0));
        Button9->setText(QApplication::translate("Calculator", "9", 0));
        Button3->setText(QApplication::translate("Calculator", "3", 0));
        Display->setText(QApplication::translate("Calculator", "0.0", 0));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
