/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QCustomPlot *plot;
    QVBoxLayout *layoutSetting;
    QPushButton *btnGenerate;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineTime;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineCount;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *lineMin;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineMax;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1246, 814);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        plot = new QCustomPlot(centralwidget);
        plot->setObjectName("plot");

        horizontalLayout->addWidget(plot);

        layoutSetting = new QVBoxLayout();
        layoutSetting->setObjectName("layoutSetting");
        btnGenerate = new QPushButton(centralwidget);
        btnGenerate->setObjectName("btnGenerate");
        btnGenerate->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Segoe UI\";\n"
"padding: 20px;"));

        layoutSetting->addWidget(btnGenerate);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        layoutSetting->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineTime = new QLineEdit(centralwidget);
        lineTime->setObjectName("lineTime");

        horizontalLayout_2->addWidget(lineTime);


        layoutSetting->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineCount = new QLineEdit(centralwidget);
        lineCount->setObjectName("lineCount");

        horizontalLayout_3->addWidget(lineCount);


        layoutSetting->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        horizontalLayout_6->addWidget(label_4);

        lineMin = new QLineEdit(centralwidget);
        lineMin->setObjectName("lineMin");

        horizontalLayout_6->addWidget(lineMin);


        layoutSetting->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        lineMax = new QLineEdit(centralwidget);
        lineMax->setObjectName("lineMax");

        horizontalLayout_5->addWidget(lineMax);


        layoutSetting->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(layoutSetting);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1246, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnGenerate->setText(QCoreApplication::translate("MainWindow", "Generate Data", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Generate Setting</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Generate time(milly sec) :</span></p></body></html>", nullptr));
        lineTime->setText(QCoreApplication::translate("MainWindow", "200", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Count :</span></p></body></html>", nullptr));
        lineCount->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Min :</span></p></body></html>", nullptr));
        lineMin->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Max :</span></p></body></html>", nullptr));
        lineMax->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
