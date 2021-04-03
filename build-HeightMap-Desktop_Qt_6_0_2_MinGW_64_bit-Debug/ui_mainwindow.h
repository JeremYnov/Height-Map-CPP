/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *generateMap;
    QSpinBox *widthInput;
    QSpinBox *heightInput;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QDoubleSpinBox *noiseScaleInput;
    QLabel *label_7;
    QSpinBox *octavesInput;
    QLabel *label_8;
    QDoubleSpinBox *lacunarityInput;
    QLabel *label_9;
    QSpinBox *seedInput;
    QLabel *label_10;
    QSpinBox *offsetYInput;
    QSpinBox *offsetXInput;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_11;
    QDoubleSpinBox *persistanceInput;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(260, 0, 541, 551));
        generateMap = new QPushButton(centralwidget);
        generateMap->setObjectName(QString::fromUtf8("generateMap"));
        generateMap->setGeometry(QRect(10, 520, 241, 31));
        widthInput = new QSpinBox(centralwidget);
        widthInput->setObjectName(QString::fromUtf8("widthInput"));
        widthInput->setGeometry(QRect(140, 30, 101, 31));
        widthInput->setMaximum(1000);
        heightInput = new QSpinBox(centralwidget);
        heightInput->setObjectName(QString::fromUtf8("heightInput"));
        heightInput->setGeometry(QRect(10, 30, 101, 31));
        heightInput->setMaximum(1000);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 101, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 10, 101, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 220, 181, 16));
        noiseScaleInput = new QDoubleSpinBox(centralwidget);
        noiseScaleInput->setObjectName(QString::fromUtf8("noiseScaleInput"));
        noiseScaleInput->setGeometry(QRect(10, 100, 231, 31));
        noiseScaleInput->setMaximum(100.000000000000000);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 80, 181, 16));
        octavesInput = new QSpinBox(centralwidget);
        octavesInput->setObjectName(QString::fromUtf8("octavesInput"));
        octavesInput->setGeometry(QRect(10, 170, 231, 31));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 150, 181, 16));
        lacunarityInput = new QDoubleSpinBox(centralwidget);
        lacunarityInput->setObjectName(QString::fromUtf8("lacunarityInput"));
        lacunarityInput->setGeometry(QRect(10, 310, 231, 31));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 290, 181, 16));
        seedInput = new QSpinBox(centralwidget);
        seedInput->setObjectName(QString::fromUtf8("seedInput"));
        seedInput->setGeometry(QRect(10, 380, 231, 31));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 360, 181, 16));
        offsetYInput = new QSpinBox(centralwidget);
        offsetYInput->setObjectName(QString::fromUtf8("offsetYInput"));
        offsetYInput->setGeometry(QRect(160, 450, 81, 31));
        offsetXInput = new QSpinBox(centralwidget);
        offsetXInput->setObjectName(QString::fromUtf8("offsetXInput"));
        offsetXInput->setGeometry(QRect(40, 450, 81, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 455, 16, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 455, 16, 16));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 430, 55, 16));
        persistanceInput = new QDoubleSpinBox(centralwidget);
        persistanceInput->setObjectName(QString::fromUtf8("persistanceInput"));
        persistanceInput->setGeometry(QRect(10, 240, 231, 31));
        persistanceInput->setMaximum(1.000000000000000);
        persistanceInput->setSingleStep(0.010000000000000);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        generateMap->setText(QCoreApplication::translate("MainWindow", "Generate Map", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Height", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Persistance", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Noise Scale", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Octaves", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Lacunarity", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Seed", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Offset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
