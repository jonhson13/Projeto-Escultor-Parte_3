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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionabreDialogo;
    QAction *actionsalvar;
    QAction *actionFechar;
    QAction *actionPutVoxel;
    QAction *actionCutVoxel;
    QAction *actionPutBox;
    QAction *actionCutBox;
    QAction *actionPutSphere;
    QAction *actionCutSphere;
    QAction *actionPutEllipsoid;
    QAction *actionCutEllipsoid;
    QWidget *centralwidget;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *horizontalSliderR;
    QLCDNumber *lcdNumberR;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSlider *horizontalSliderG;
    QLCDNumber *lcdNumberG;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSlider *horizontalSliderB;
    QLCDNumber *lcdNumberB;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSlider *horizontalSliderDimX;
    QLCDNumber *lcdNumberDimX;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSlider *horizontalSliderDimY;
    QLCDNumber *lcdNumberDimY;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSlider *horizontalSliderDimZ;
    QLCDNumber *lcdNumberDimZ;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSlider *horizontalSliderRaio;
    QLCDNumber *lcdNumberRaio;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSlider *horizontalSliderRx;
    QLCDNumber *lcdNumberRx;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QSlider *horizontalSliderRy;
    QLCDNumber *lcdNumberRy;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QSlider *horizontalSliderRz;
    QLCDNumber *lcdNumberRz;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QSlider *horizontalSliderZ;
    QLCDNumber *lcdNumberZ;
    Plotter *widget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(806, 532);
        actionabreDialogo = new QAction(MainWindow);
        actionabreDialogo->setObjectName(QString::fromUtf8("actionabreDialogo"));
        actionsalvar = new QAction(MainWindow);
        actionsalvar->setObjectName(QString::fromUtf8("actionsalvar"));
        actionFechar = new QAction(MainWindow);
        actionFechar->setObjectName(QString::fromUtf8("actionFechar"));
        actionPutVoxel = new QAction(MainWindow);
        actionPutVoxel->setObjectName(QString::fromUtf8("actionPutVoxel"));
        actionPutVoxel->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icones/voxel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutVoxel->setIcon(icon);
        actionCutVoxel = new QAction(MainWindow);
        actionCutVoxel->setObjectName(QString::fromUtf8("actionCutVoxel"));
        actionCutVoxel->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icones/cutvoxel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutVoxel->setIcon(icon1);
        actionPutBox = new QAction(MainWindow);
        actionPutBox->setObjectName(QString::fromUtf8("actionPutBox"));
        actionPutBox->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icones/box.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutBox->setIcon(icon2);
        actionCutBox = new QAction(MainWindow);
        actionCutBox->setObjectName(QString::fromUtf8("actionCutBox"));
        actionCutBox->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icones/cutbox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutBox->setIcon(icon3);
        actionPutSphere = new QAction(MainWindow);
        actionPutSphere->setObjectName(QString::fromUtf8("actionPutSphere"));
        actionPutSphere->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icones/sphere.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutSphere->setIcon(icon4);
        actionCutSphere = new QAction(MainWindow);
        actionCutSphere->setObjectName(QString::fromUtf8("actionCutSphere"));
        actionCutSphere->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icones/cutsphere.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutSphere->setIcon(icon5);
        actionPutEllipsoid = new QAction(MainWindow);
        actionPutEllipsoid->setObjectName(QString::fromUtf8("actionPutEllipsoid"));
        actionPutEllipsoid->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icones/ellipsoid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutEllipsoid->setIcon(icon6);
        actionCutEllipsoid = new QAction(MainWindow);
        actionCutEllipsoid->setObjectName(QString::fromUtf8("actionCutEllipsoid"));
        actionCutEllipsoid->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icones/cutellipsoid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutEllipsoid->setIcon(icon7);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_6 = new QGridLayout(centralwidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(true);
        groupBox->setCheckable(false);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSliderR = new QSlider(groupBox);
        horizontalSliderR->setObjectName(QString::fromUtf8("horizontalSliderR"));
        horizontalSliderR->setMaximum(255);
        horizontalSliderR->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSliderR);

        lcdNumberR = new QLCDNumber(groupBox);
        lcdNumberR->setObjectName(QString::fromUtf8("lcdNumberR"));

        horizontalLayout->addWidget(lcdNumberR);

        horizontalLayout->setStretch(0, 20);
        horizontalLayout->setStretch(1, 60);
        horizontalLayout->setStretch(2, 20);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSliderG = new QSlider(groupBox);
        horizontalSliderG->setObjectName(QString::fromUtf8("horizontalSliderG"));
        horizontalSliderG->setMaximum(255);
        horizontalSliderG->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderG);

        lcdNumberG = new QLCDNumber(groupBox);
        lcdNumberG->setObjectName(QString::fromUtf8("lcdNumberG"));

        horizontalLayout_2->addWidget(lcdNumberG);

        horizontalLayout_2->setStretch(0, 20);
        horizontalLayout_2->setStretch(1, 60);
        horizontalLayout_2->setStretch(2, 20);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSliderB = new QSlider(groupBox);
        horizontalSliderB->setObjectName(QString::fromUtf8("horizontalSliderB"));
        horizontalSliderB->setMaximum(255);
        horizontalSliderB->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderB);

        lcdNumberB = new QLCDNumber(groupBox);
        lcdNumberB->setObjectName(QString::fromUtf8("lcdNumberB"));

        horizontalLayout_3->addWidget(lcdNumberB);

        horizontalLayout_3->setStretch(0, 20);
        horizontalLayout_3->setStretch(1, 60);
        horizontalLayout_3->setStretch(2, 20);

        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        groupBox_2->setFlat(true);
        groupBox_2->setCheckable(false);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSliderDimX = new QSlider(groupBox_2);
        horizontalSliderDimX->setObjectName(QString::fromUtf8("horizontalSliderDimX"));
        horizontalSliderDimX->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSliderDimX);

        lcdNumberDimX = new QLCDNumber(groupBox_2);
        lcdNumberDimX->setObjectName(QString::fromUtf8("lcdNumberDimX"));

        horizontalLayout_4->addWidget(lcdNumberDimX);

        horizontalLayout_4->setStretch(0, 20);
        horizontalLayout_4->setStretch(1, 60);
        horizontalLayout_4->setStretch(2, 20);

        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSliderDimY = new QSlider(groupBox_2);
        horizontalSliderDimY->setObjectName(QString::fromUtf8("horizontalSliderDimY"));
        horizontalSliderDimY->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSliderDimY);

        lcdNumberDimY = new QLCDNumber(groupBox_2);
        lcdNumberDimY->setObjectName(QString::fromUtf8("lcdNumberDimY"));

        horizontalLayout_5->addWidget(lcdNumberDimY);

        horizontalLayout_5->setStretch(0, 20);
        horizontalLayout_5->setStretch(1, 60);
        horizontalLayout_5->setStretch(2, 20);

        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        horizontalSliderDimZ = new QSlider(groupBox_2);
        horizontalSliderDimZ->setObjectName(QString::fromUtf8("horizontalSliderDimZ"));
        horizontalSliderDimZ->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSliderDimZ);

        lcdNumberDimZ = new QLCDNumber(groupBox_2);
        lcdNumberDimZ->setObjectName(QString::fromUtf8("lcdNumberDimZ"));

        horizontalLayout_6->addWidget(lcdNumberDimZ);

        horizontalLayout_6->setStretch(0, 20);
        horizontalLayout_6->setStretch(1, 60);
        horizontalLayout_6->setStretch(2, 20);

        verticalLayout_2->addLayout(horizontalLayout_6);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setAlignment(Qt::AlignCenter);
        groupBox_3->setFlat(true);
        groupBox_3->setCheckable(false);
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        horizontalSliderRaio = new QSlider(groupBox_3);
        horizontalSliderRaio->setObjectName(QString::fromUtf8("horizontalSliderRaio"));
        horizontalSliderRaio->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(horizontalSliderRaio);

        lcdNumberRaio = new QLCDNumber(groupBox_3);
        lcdNumberRaio->setObjectName(QString::fromUtf8("lcdNumberRaio"));

        horizontalLayout_8->addWidget(lcdNumberRaio);

        horizontalLayout_8->setStretch(0, 20);
        horizontalLayout_8->setStretch(1, 60);
        horizontalLayout_8->setStretch(2, 20);

        gridLayout_4->addLayout(horizontalLayout_8, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setAlignment(Qt::AlignCenter);
        groupBox_4->setFlat(true);
        groupBox_4->setCheckable(false);
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSliderRx = new QSlider(groupBox_4);
        horizontalSliderRx->setObjectName(QString::fromUtf8("horizontalSliderRx"));
        horizontalSliderRx->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSliderRx);

        lcdNumberRx = new QLCDNumber(groupBox_4);
        lcdNumberRx->setObjectName(QString::fromUtf8("lcdNumberRx"));

        horizontalLayout_7->addWidget(lcdNumberRx);

        horizontalLayout_7->setStretch(0, 20);
        horizontalLayout_7->setStretch(1, 60);
        horizontalLayout_7->setStretch(2, 20);

        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        horizontalSliderRy = new QSlider(groupBox_4);
        horizontalSliderRy->setObjectName(QString::fromUtf8("horizontalSliderRy"));
        horizontalSliderRy->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalSliderRy);

        lcdNumberRy = new QLCDNumber(groupBox_4);
        lcdNumberRy->setObjectName(QString::fromUtf8("lcdNumberRy"));

        horizontalLayout_9->addWidget(lcdNumberRy);

        horizontalLayout_9->setStretch(0, 20);
        horizontalLayout_9->setStretch(1, 60);
        horizontalLayout_9->setStretch(2, 20);

        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        horizontalSliderRz = new QSlider(groupBox_4);
        horizontalSliderRz->setObjectName(QString::fromUtf8("horizontalSliderRz"));
        horizontalSliderRz->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(horizontalSliderRz);

        lcdNumberRz = new QLCDNumber(groupBox_4);
        lcdNumberRz->setObjectName(QString::fromUtf8("lcdNumberRz"));

        horizontalLayout_10->addWidget(lcdNumberRz);

        horizontalLayout_10->setStretch(0, 20);
        horizontalLayout_10->setStretch(1, 60);
        horizontalLayout_10->setStretch(2, 20);

        verticalLayout_3->addLayout(horizontalLayout_10);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_4);


        horizontalLayout_13->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setAlignment(Qt::AlignCenter);
        groupBox_5->setFlat(true);
        groupBox_5->setCheckable(false);
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_12->addWidget(label_12);

        horizontalSliderZ = new QSlider(groupBox_5);
        horizontalSliderZ->setObjectName(QString::fromUtf8("horizontalSliderZ"));
        horizontalSliderZ->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(horizontalSliderZ);

        lcdNumberZ = new QLCDNumber(groupBox_5);
        lcdNumberZ->setObjectName(QString::fromUtf8("lcdNumberZ"));

        horizontalLayout_12->addWidget(lcdNumberZ);

        horizontalLayout_12->setStretch(0, 10);
        horizontalLayout_12->setStretch(1, 70);
        horizontalLayout_12->setStretch(2, 20);

        gridLayout_5->addLayout(horizontalLayout_12, 0, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_5);

        widget = new Plotter(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        verticalLayout_5->addWidget(widget);

        verticalLayout_5->setStretch(0, 10);
        verticalLayout_5->setStretch(1, 90);

        horizontalLayout_13->addLayout(verticalLayout_5);

        horizontalLayout_13->setStretch(0, 20);
        horizontalLayout_13->setStretch(1, 80);

        gridLayout_6->addLayout(horizontalLayout_13, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 806, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QFont font;
        font.setPointSize(12);
        toolBar->setFont(font);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionabreDialogo);
        menuFile->addAction(actionsalvar);
        menuFile->addAction(actionFechar);
        toolBar->addAction(actionPutVoxel);
        toolBar->addAction(actionCutVoxel);
        toolBar->addAction(actionPutBox);
        toolBar->addAction(actionCutBox);
        toolBar->addAction(actionPutSphere);
        toolBar->addAction(actionCutSphere);
        toolBar->addAction(actionPutEllipsoid);
        toolBar->addAction(actionCutEllipsoid);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderZ, SIGNAL(valueChanged(int)), lcdNumberZ, SLOT(display(int)));
        QObject::connect(horizontalSliderR, SIGNAL(valueChanged(int)), lcdNumberR, SLOT(display(int)));
        QObject::connect(horizontalSliderG, SIGNAL(valueChanged(int)), lcdNumberG, SLOT(display(int)));
        QObject::connect(horizontalSliderB, SIGNAL(valueChanged(int)), lcdNumberB, SLOT(display(int)));
        QObject::connect(horizontalSliderDimX, SIGNAL(valueChanged(int)), lcdNumberDimX, SLOT(display(int)));
        QObject::connect(horizontalSliderDimY, SIGNAL(valueChanged(int)), lcdNumberDimY, SLOT(display(int)));
        QObject::connect(horizontalSliderDimZ, SIGNAL(valueChanged(int)), lcdNumberDimZ, SLOT(display(int)));
        QObject::connect(horizontalSliderRaio, SIGNAL(valueChanged(int)), lcdNumberRaio, SLOT(display(int)));
        QObject::connect(horizontalSliderRx, SIGNAL(valueChanged(int)), lcdNumberRx, SLOT(display(int)));
        QObject::connect(horizontalSliderRy, SIGNAL(valueChanged(int)), lcdNumberRy, SLOT(display(int)));
        QObject::connect(horizontalSliderRz, SIGNAL(valueChanged(int)), lcdNumberRz, SLOT(display(int)));
        QObject::connect(actionPutVoxel, SIGNAL(triggered(bool)), MainWindow, SLOT(capturaAcao(bool)));
        QObject::connect(actionCutVoxel, SIGNAL(triggered(bool)), MainWindow, SLOT(capturaAcao(bool)));
        QObject::connect(actionPutBox, SIGNAL(triggered(bool)), MainWindow, SLOT(capturaAcao(bool)));
        QObject::connect(actionCutBox, SIGNAL(triggered(bool)), MainWindow, SLOT(capturaAcao(bool)));
        QObject::connect(actionPutSphere, SIGNAL(triggered(bool)), MainWindow, SLOT(capturaAcao(bool)));
        QObject::connect(actionCutSphere, SIGNAL(triggered(bool)), MainWindow, SLOT(capturaAcao(bool)));
        QObject::connect(actionPutEllipsoid, SIGNAL(triggered(bool)), MainWindow, SLOT(capturaAcao(bool)));
        QObject::connect(actionCutEllipsoid, SIGNAL(triggered(bool)), MainWindow, SLOT(capturaAcao(bool)));
        QObject::connect(horizontalSliderB, SIGNAL(valueChanged(int)), widget, SLOT(mudaB(int)));
        QObject::connect(actionFechar, SIGNAL(triggered(bool)), MainWindow, SLOT(close()));
        QObject::connect(horizontalSliderG, SIGNAL(valueChanged(int)), widget, SLOT(mudaG(int)));
        QObject::connect(actionsalvar, SIGNAL(triggered(bool)), widget, SLOT(salvaEscultor()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionabreDialogo->setText(QCoreApplication::translate("MainWindow", "Dimensions", nullptr));
        actionsalvar->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionFechar->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionPutVoxel->setText(QCoreApplication::translate("MainWindow", "PutVoxel", nullptr));
        actionCutVoxel->setText(QCoreApplication::translate("MainWindow", "CutVoxel", nullptr));
        actionPutBox->setText(QCoreApplication::translate("MainWindow", "PutBox", nullptr));
        actionCutBox->setText(QCoreApplication::translate("MainWindow", "CutBox", nullptr));
        actionPutSphere->setText(QCoreApplication::translate("MainWindow", "PutSphere", nullptr));
        actionCutSphere->setText(QCoreApplication::translate("MainWindow", "CutSphere", nullptr));
        actionPutEllipsoid->setText(QCoreApplication::translate("MainWindow", "PutEllipsoid", nullptr));
        actionCutEllipsoid->setText(QCoreApplication::translate("MainWindow", "CutEllipsoid", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Color", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Box", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "DimX", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "DimY", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "DimZ", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Sphere", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Radius", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Ellipsoid", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Rx", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Ry", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Rz", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Plane", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "               Z", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
