/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QRadioButton *radioButton;
    QRadioButton *octSelButton;
    QRadioButton *hexSelButton;
    QLineEdit *inputNumberEdit;
    QPushButton *pushButton;
    QLabel *answerTab;
    QLineEdit *inA;
    QLineEdit *inB;
    QLabel *label;
    QPushButton *findX;
    QLabel *label_2;
    QLineEdit *inC;
    QLabel *ansX1;
    QLabel *ansX2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(470, 80, 41, 20));
        octSelButton = new QRadioButton(centralwidget);
        octSelButton->setObjectName(QString::fromUtf8("octSelButton"));
        octSelButton->setGeometry(QRect(470, 110, 41, 20));
        hexSelButton = new QRadioButton(centralwidget);
        hexSelButton->setObjectName(QString::fromUtf8("hexSelButton"));
        hexSelButton->setGeometry(QRect(470, 140, 41, 20));
        inputNumberEdit = new QLineEdit(centralwidget);
        inputNumberEdit->setObjectName(QString::fromUtf8("inputNumberEdit"));
        inputNumberEdit->setGeometry(QRect(340, 80, 113, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 120, 100, 32));
        answerTab = new QLabel(centralwidget);
        answerTab->setObjectName(QString::fromUtf8("answerTab"));
        answerTab->setGeometry(QRect(530, 110, 81, 31));
        inA = new QLineEdit(centralwidget);
        inA->setObjectName(QString::fromUtf8("inA"));
        inA->setGeometry(QRect(60, 80, 41, 21));
        inB = new QLineEdit(centralwidget);
        inB->setObjectName(QString::fromUtf8("inB"));
        inB->setGeometry(QRect(140, 80, 51, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 80, 41, 21));
        findX = new QPushButton(centralwidget);
        findX->setObjectName(QString::fromUtf8("findX"));
        findX->setGeometry(QRect(60, 120, 100, 32));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 80, 21, 16));
        inC = new QLineEdit(centralwidget);
        inC->setObjectName(QString::fromUtf8("inC"));
        inC->setGeometry(QRect(220, 80, 41, 21));
        ansX1 = new QLabel(centralwidget);
        ansX1->setObjectName(QString::fromUtf8("ansX1"));
        ansX1->setGeometry(QRect(60, 150, 201, 41));
        ansX2 = new QLabel(centralwidget);
        ansX2->setObjectName(QString::fromUtf8("ansX2"));
        ansX2->setGeometry(QRect(60, 210, 191, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 30, 181, 41));
        label_3->setTextFormat(Qt::AutoText);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 30, 251, 41));
        label_4->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        octSelButton->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        hexSelButton->setText(QCoreApplication::translate("MainWindow", "16", nullptr));
        inputNumberEdit->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        answerTab->setText(QCoreApplication::translate("MainWindow", "ans", nullptr));
        inA->setText(QCoreApplication::translate("MainWindow", "a", nullptr));
        inB->setText(QCoreApplication::translate("MainWindow", "b", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "x^2+", nullptr));
        findX->setText(QCoreApplication::translate("MainWindow", "find X", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "x+", nullptr));
        inC->setText(QCoreApplication::translate("MainWindow", "c", nullptr));
        ansX1->setText(QCoreApplication::translate("MainWindow", "ans", nullptr));
        ansX2->setText(QCoreApplication::translate("MainWindow", "ans", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\205\320\276\320\266\320\264\320\265\320\275\320\270\320\265 \320\272\320\276\321\200\320\275\320\265\320\271", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\262\320\276\320\264 \321\201\320\270\321\201\321\202\320\265\320\274 \320\270\320\267\321\201\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\262\320\262\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
