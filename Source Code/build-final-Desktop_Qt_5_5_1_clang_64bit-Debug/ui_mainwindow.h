/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCrunchy_Bass;
    QAction *actionLevel_Up;
    QAction *actionDub_Bass;
    QAction *actionSmooth_Lead;
    QAction *actionBusy_Bee;
    QAction *actionMotor;
    QWidget *centralWidget;
    QComboBox *comboBox_osc1;
    QComboBox *comboBox_osc2;
    QSlider *verticalSlider_oscRatio;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_oscRatio;
    QSlider *horizontalSlider_LFO;
    QLabel *label_6;
    QLabel *label_LFO;
    QSlider *verticalSlider_attack;
    QSlider *verticalSlider_decay;
    QSlider *verticalSlider_sustain;
    QSlider *verticalSlider_release;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *comboBox_filter;
    QDial *dial_res;
    QSlider *horizontalSlider_cutoff;
    QLabel *label_15;
    QLabel *label_cutoff;
    QPushButton *pushButton_filter;
    QPushButton *pushButton_LFO;
    QComboBox *comboBox_midi;
    QLabel *label_17;
    QLabel *label_18;
    QComboBox *comboBox_LFO;
    QLabel *label_attack;
    QLabel *label_decay;
    QLabel *label_sustain;
    QLabel *label_release;
    QSlider *horizontalSlider_LFO_amount;
    QLabel *label_19;
    QLabel *label_LFO_amount;
    QComboBox *comboBox_dist;
    QSlider *horizontalSlider_dist_amount;
    QLabel *label_dist_amount;
    QPushButton *pushButton_dist;
    QGroupBox *groupBox;
    QComboBox *comboBox_LFO_wave;
    QLabel *label_16;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_5;
    QGroupBox *groupBox_6;
    QSlider *verticalSlider_gain;
    QLabel *label_7;
    QSlider *horizontalSlider_pbend;
    QLabel *label_pbend;
    QMenuBar *menuBar;
    QMenu *menuPresets;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(770, 556);
        actionCrunchy_Bass = new QAction(MainWindow);
        actionCrunchy_Bass->setObjectName(QStringLiteral("actionCrunchy_Bass"));
        actionLevel_Up = new QAction(MainWindow);
        actionLevel_Up->setObjectName(QStringLiteral("actionLevel_Up"));
        actionDub_Bass = new QAction(MainWindow);
        actionDub_Bass->setObjectName(QStringLiteral("actionDub_Bass"));
        actionSmooth_Lead = new QAction(MainWindow);
        actionSmooth_Lead->setObjectName(QStringLiteral("actionSmooth_Lead"));
        actionBusy_Bee = new QAction(MainWindow);
        actionBusy_Bee->setObjectName(QStringLiteral("actionBusy_Bee"));
        actionMotor = new QAction(MainWindow);
        actionMotor->setObjectName(QStringLiteral("actionMotor"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox_osc1 = new QComboBox(centralWidget);
        comboBox_osc1->setObjectName(QStringLiteral("comboBox_osc1"));
        comboBox_osc1->setGeometry(QRect(30, 90, 104, 26));
        comboBox_osc2 = new QComboBox(centralWidget);
        comboBox_osc2->setObjectName(QStringLiteral("comboBox_osc2"));
        comboBox_osc2->setGeometry(QRect(30, 150, 104, 26));
        verticalSlider_oscRatio = new QSlider(centralWidget);
        verticalSlider_oscRatio->setObjectName(QStringLiteral("verticalSlider_oscRatio"));
        verticalSlider_oscRatio->setGeometry(QRect(150, 50, 22, 160));
        verticalSlider_oscRatio->setMaximum(100);
        verticalSlider_oscRatio->setValue(50);
        verticalSlider_oscRatio->setOrientation(Qt::Vertical);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 60, 59, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 130, 59, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 30, 31, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 50, 41, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 190, 41, 16));
        label_oscRatio = new QLabel(centralWidget);
        label_oscRatio->setObjectName(QStringLiteral("label_oscRatio"));
        label_oscRatio->setGeometry(QRect(150, 210, 31, 16));
        horizontalSlider_LFO = new QSlider(centralWidget);
        horizontalSlider_LFO->setObjectName(QStringLiteral("horizontalSlider_LFO"));
        horizontalSlider_LFO->setGeometry(QRect(30, 310, 160, 22));
        horizontalSlider_LFO->setMinimum(1);
        horizontalSlider_LFO->setMaximum(200);
        horizontalSlider_LFO->setValue(50);
        horizontalSlider_LFO->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 330, 71, 16));
        label_LFO = new QLabel(centralWidget);
        label_LFO->setObjectName(QStringLiteral("label_LFO"));
        label_LFO->setGeometry(QRect(200, 310, 51, 16));
        verticalSlider_attack = new QSlider(centralWidget);
        verticalSlider_attack->setObjectName(QStringLiteral("verticalSlider_attack"));
        verticalSlider_attack->setGeometry(QRect(310, 70, 22, 101));
        verticalSlider_attack->setMaximum(999);
        verticalSlider_attack->setOrientation(Qt::Vertical);
        verticalSlider_decay = new QSlider(centralWidget);
        verticalSlider_decay->setObjectName(QStringLiteral("verticalSlider_decay"));
        verticalSlider_decay->setGeometry(QRect(350, 70, 22, 101));
        verticalSlider_decay->setOrientation(Qt::Vertical);
        verticalSlider_sustain = new QSlider(centralWidget);
        verticalSlider_sustain->setObjectName(QStringLiteral("verticalSlider_sustain"));
        verticalSlider_sustain->setGeometry(QRect(390, 70, 22, 101));
        verticalSlider_sustain->setValue(99);
        verticalSlider_sustain->setOrientation(Qt::Vertical);
        verticalSlider_release = new QSlider(centralWidget);
        verticalSlider_release->setObjectName(QStringLiteral("verticalSlider_release"));
        verticalSlider_release->setGeometry(QRect(430, 70, 22, 101));
        verticalSlider_release->setMaximum(999);
        verticalSlider_release->setOrientation(Qt::Vertical);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(320, 50, 16, 16));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(360, 50, 16, 16));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(400, 50, 16, 16));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(440, 50, 16, 16));
        comboBox_filter = new QComboBox(centralWidget);
        comboBox_filter->setObjectName(QStringLiteral("comboBox_filter"));
        comboBox_filter->setGeometry(QRect(380, 300, 104, 26));
        dial_res = new QDial(centralWidget);
        dial_res->setObjectName(QStringLiteral("dial_res"));
        dial_res->setGeometry(QRect(500, 280, 50, 64));
        horizontalSlider_cutoff = new QSlider(centralWidget);
        horizontalSlider_cutoff->setObjectName(QStringLiteral("horizontalSlider_cutoff"));
        horizontalSlider_cutoff->setGeometry(QRect(350, 360, 160, 22));
        horizontalSlider_cutoff->setMinimum(1);
        horizontalSlider_cutoff->setMaximum(1000);
        horizontalSlider_cutoff->setValue(440);
        horizontalSlider_cutoff->setOrientation(Qt::Horizontal);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(380, 390, 111, 16));
        label_cutoff = new QLabel(centralWidget);
        label_cutoff->setObjectName(QStringLiteral("label_cutoff"));
        label_cutoff->setGeometry(QRect(520, 360, 59, 16));
        pushButton_filter = new QPushButton(centralWidget);
        pushButton_filter->setObjectName(QStringLiteral("pushButton_filter"));
        pushButton_filter->setGeometry(QRect(340, 300, 31, 32));
        pushButton_LFO = new QPushButton(centralWidget);
        pushButton_LFO->setObjectName(QStringLiteral("pushButton_LFO"));
        pushButton_LFO->setGeometry(QRect(100, 270, 31, 32));
        comboBox_midi = new QComboBox(centralWidget);
        comboBox_midi->setObjectName(QStringLiteral("comboBox_midi"));
        comboBox_midi->setGeometry(QRect(500, 80, 211, 26));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(550, 60, 111, 16));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(490, 270, 71, 16));
        comboBox_LFO = new QComboBox(centralWidget);
        comboBox_LFO->setObjectName(QStringLiteral("comboBox_LFO"));
        comboBox_LFO->setGeometry(QRect(150, 270, 104, 26));
        label_attack = new QLabel(centralWidget);
        label_attack->setObjectName(QStringLiteral("label_attack"));
        label_attack->setGeometry(QRect(305, 180, 41, 20));
        label_decay = new QLabel(centralWidget);
        label_decay->setObjectName(QStringLiteral("label_decay"));
        label_decay->setGeometry(QRect(350, 180, 41, 20));
        label_sustain = new QLabel(centralWidget);
        label_sustain->setObjectName(QStringLiteral("label_sustain"));
        label_sustain->setGeometry(QRect(390, 180, 31, 20));
        label_release = new QLabel(centralWidget);
        label_release->setObjectName(QStringLiteral("label_release"));
        label_release->setGeometry(QRect(430, 180, 41, 20));
        horizontalSlider_LFO_amount = new QSlider(centralWidget);
        horizontalSlider_LFO_amount->setObjectName(QStringLiteral("horizontalSlider_LFO_amount"));
        horizontalSlider_LFO_amount->setGeometry(QRect(30, 350, 160, 22));
        horizontalSlider_LFO_amount->setMaximum(500);
        horizontalSlider_LFO_amount->setValue(50);
        horizontalSlider_LFO_amount->setOrientation(Qt::Horizontal);
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(90, 370, 59, 16));
        label_LFO_amount = new QLabel(centralWidget);
        label_LFO_amount->setObjectName(QStringLiteral("label_LFO_amount"));
        label_LFO_amount->setGeometry(QRect(200, 350, 71, 16));
        comboBox_dist = new QComboBox(centralWidget);
        comboBox_dist->setObjectName(QStringLiteral("comboBox_dist"));
        comboBox_dist->setGeometry(QRect(640, 310, 104, 26));
        horizontalSlider_dist_amount = new QSlider(centralWidget);
        horizontalSlider_dist_amount->setObjectName(QStringLiteral("horizontalSlider_dist_amount"));
        horizontalSlider_dist_amount->setGeometry(QRect(640, 340, 101, 22));
        horizontalSlider_dist_amount->setMinimum(0);
        horizontalSlider_dist_amount->setMaximum(224);
        horizontalSlider_dist_amount->setOrientation(Qt::Horizontal);
        label_dist_amount = new QLabel(centralWidget);
        label_dist_amount->setObjectName(QStringLiteral("label_dist_amount"));
        label_dist_amount->setGeometry(QRect(660, 370, 61, 16));
        pushButton_dist = new QPushButton(centralWidget);
        pushButton_dist->setObjectName(QStringLiteral("pushButton_dist"));
        pushButton_dist->setGeometry(QRect(670, 270, 31, 32));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 230, 261, 261));
        comboBox_LFO_wave = new QComboBox(groupBox);
        comboBox_LFO_wave->setObjectName(QStringLiteral("comboBox_LFO_wave"));
        comboBox_LFO_wave->setGeometry(QRect(60, 180, 104, 26));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(70, 210, 71, 16));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 231, 221));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(270, 10, 211, 221));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(310, 230, 261, 261));
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(610, 230, 151, 261));
        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(720, 0, 41, 221));
        verticalSlider_gain = new QSlider(groupBox_6);
        verticalSlider_gain->setObjectName(QStringLiteral("verticalSlider_gain"));
        verticalSlider_gain->setGeometry(QRect(10, 40, 22, 160));
        verticalSlider_gain->setValue(75);
        verticalSlider_gain->setOrientation(Qt::Vertical);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(540, 120, 131, 16));
        horizontalSlider_pbend = new QSlider(centralWidget);
        horizontalSlider_pbend->setObjectName(QStringLiteral("horizontalSlider_pbend"));
        horizontalSlider_pbend->setGeometry(QRect(520, 150, 160, 22));
        horizontalSlider_pbend->setMaximum(1200);
        horizontalSlider_pbend->setValue(100);
        horizontalSlider_pbend->setOrientation(Qt::Horizontal);
        label_pbend = new QLabel(centralWidget);
        label_pbend->setObjectName(QStringLiteral("label_pbend"));
        label_pbend->setGeometry(QRect(550, 180, 101, 16));
        MainWindow->setCentralWidget(centralWidget);
        groupBox_6->raise();
        groupBox_5->raise();
        groupBox_4->raise();
        groupBox_3->raise();
        groupBox->raise();
        groupBox_2->raise();
        comboBox_osc1->raise();
        comboBox_osc2->raise();
        verticalSlider_oscRatio->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_oscRatio->raise();
        horizontalSlider_LFO->raise();
        label_6->raise();
        label_LFO->raise();
        verticalSlider_attack->raise();
        verticalSlider_decay->raise();
        verticalSlider_sustain->raise();
        verticalSlider_release->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        comboBox_filter->raise();
        dial_res->raise();
        horizontalSlider_cutoff->raise();
        label_15->raise();
        label_cutoff->raise();
        pushButton_filter->raise();
        pushButton_LFO->raise();
        comboBox_midi->raise();
        label_17->raise();
        label_18->raise();
        comboBox_LFO->raise();
        label_attack->raise();
        label_decay->raise();
        label_sustain->raise();
        label_release->raise();
        horizontalSlider_LFO_amount->raise();
        label_19->raise();
        label_LFO_amount->raise();
        comboBox_dist->raise();
        horizontalSlider_dist_amount->raise();
        label_dist_amount->raise();
        pushButton_dist->raise();
        label_7->raise();
        horizontalSlider_pbend->raise();
        label_pbend->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 770, 22));
        menuPresets = new QMenu(menuBar);
        menuPresets->setObjectName(QStringLiteral("menuPresets"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(comboBox_osc1, comboBox_osc2);
        QWidget::setTabOrder(comboBox_osc2, comboBox_midi);
        QWidget::setTabOrder(comboBox_midi, horizontalSlider_LFO_amount);
        QWidget::setTabOrder(horizontalSlider_LFO_amount, horizontalSlider_LFO);
        QWidget::setTabOrder(horizontalSlider_LFO, pushButton_LFO);
        QWidget::setTabOrder(pushButton_LFO, comboBox_LFO);
        QWidget::setTabOrder(comboBox_LFO, verticalSlider_oscRatio);
        QWidget::setTabOrder(verticalSlider_oscRatio, verticalSlider_attack);
        QWidget::setTabOrder(verticalSlider_attack, verticalSlider_decay);
        QWidget::setTabOrder(verticalSlider_decay, verticalSlider_sustain);
        QWidget::setTabOrder(verticalSlider_sustain, verticalSlider_release);
        QWidget::setTabOrder(verticalSlider_release, pushButton_filter);
        QWidget::setTabOrder(pushButton_filter, comboBox_filter);
        QWidget::setTabOrder(comboBox_filter, horizontalSlider_cutoff);
        QWidget::setTabOrder(horizontalSlider_cutoff, dial_res);
        QWidget::setTabOrder(dial_res, horizontalSlider_dist_amount);
        QWidget::setTabOrder(horizontalSlider_dist_amount, comboBox_dist);
        QWidget::setTabOrder(comboBox_dist, pushButton_dist);
        QWidget::setTabOrder(pushButton_dist, verticalSlider_gain);

        menuBar->addAction(menuPresets->menuAction());
        menuPresets->addAction(actionCrunchy_Bass);
        menuPresets->addAction(actionDub_Bass);
        menuPresets->addAction(actionLevel_Up);
        menuPresets->addAction(actionSmooth_Lead);
        menuPresets->addAction(actionBusy_Bee);
        menuPresets->addAction(actionMotor);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionCrunchy_Bass->setText(QApplication::translate("MainWindow", "Crunchy Bass", 0));
        actionLevel_Up->setText(QApplication::translate("MainWindow", "Level Up", 0));
        actionDub_Bass->setText(QApplication::translate("MainWindow", "Dub Bass", 0));
        actionSmooth_Lead->setText(QApplication::translate("MainWindow", "Smooth Lead", 0));
        actionBusy_Bee->setText(QApplication::translate("MainWindow", "Busy Bee", 0));
        actionMotor->setText(QApplication::translate("MainWindow", "Motor", 0));
        comboBox_osc1->clear();
        comboBox_osc1->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Sine", 0)
         << QApplication::translate("MainWindow", "Saw", 0)
         << QApplication::translate("MainWindow", "Triangle", 0)
         << QApplication::translate("MainWindow", "Square", 0)
        );
        comboBox_osc2->clear();
        comboBox_osc2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Sine", 0)
         << QApplication::translate("MainWindow", "Saw", 0)
         << QApplication::translate("MainWindow", "Triangle", 0)
         << QApplication::translate("MainWindow", "Square", 0)
        );
        label->setText(QApplication::translate("MainWindow", "Osc. 1", 0));
        label_2->setText(QApplication::translate("MainWindow", "Osc. 2", 0));
        label_3->setText(QApplication::translate("MainWindow", "Ratio", 0));
        label_4->setText(QApplication::translate("MainWindow", "Osc. 1", 0));
        label_5->setText(QApplication::translate("MainWindow", "Osc. 2", 0));
        label_oscRatio->setText(QApplication::translate("MainWindow", "0.50", 0));
        label_6->setText(QApplication::translate("MainWindow", "Frequency", 0));
        label_LFO->setText(QApplication::translate("MainWindow", "5.0 Hz", 0));
        label_9->setText(QApplication::translate("MainWindow", "A", 0));
        label_10->setText(QApplication::translate("MainWindow", "D", 0));
        label_11->setText(QApplication::translate("MainWindow", "S", 0));
        label_12->setText(QApplication::translate("MainWindow", "R", 0));
        comboBox_filter->clear();
        comboBox_filter->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Low Pass", 0)
         << QApplication::translate("MainWindow", "High Pass", 0)
         << QApplication::translate("MainWindow", "Resonant", 0)
        );
        label_15->setText(QApplication::translate("MainWindow", "Cutoff Frequency", 0));
        label_cutoff->setText(QApplication::translate("MainWindow", "440 Hz", 0));
        pushButton_filter->setText(QApplication::translate("MainWindow", "Off", 0));
        pushButton_LFO->setText(QApplication::translate("MainWindow", "On", 0));
        label_17->setText(QApplication::translate("MainWindow", "Midi Input Device", 0));
        label_18->setText(QApplication::translate("MainWindow", "Resonance", 0));
        comboBox_LFO->clear();
        comboBox_LFO->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Frequency", 0)
         << QApplication::translate("MainWindow", "Ratio", 0)
         << QApplication::translate("MainWindow", "Filter", 0)
         << QApplication::translate("MainWindow", "Distortion", 0)
        );
        label_attack->setText(QApplication::translate("MainWindow", "0.01s", 0));
        label_decay->setText(QApplication::translate("MainWindow", "0.1s", 0));
        label_sustain->setText(QApplication::translate("MainWindow", "1", 0));
        label_release->setText(QApplication::translate("MainWindow", "0.01s", 0));
        label_19->setText(QApplication::translate("MainWindow", "Amount", 0));
        label_LFO_amount->setText(QApplication::translate("MainWindow", "50 cents", 0));
        comboBox_dist->clear();
        comboBox_dist->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Overdrive", 0)
         << QApplication::translate("MainWindow", "Bitcrusher", 0)
        );
        label_dist_amount->setText(QApplication::translate("MainWindow", "1", 0));
        pushButton_dist->setText(QApplication::translate("MainWindow", "Off", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "LFO", 0));
        comboBox_LFO_wave->clear();
        comboBox_LFO_wave->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Sine", 0)
         << QApplication::translate("MainWindow", "Saw", 0)
         << QApplication::translate("MainWindow", "Triangle", 0)
         << QApplication::translate("MainWindow", "Square", 0)
        );
        label_16->setText(QApplication::translate("MainWindow", "Wave Form", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Oscillators", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Amplitude Envelope", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Filter", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Distortion", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Gain", 0));
        label_7->setText(QApplication::translate("MainWindow", "Pitch Bend Amount", 0));
        label_pbend->setText(QApplication::translate("MainWindow", "100 cents", 0));
        menuPresets->setTitle(QApplication::translate("MainWindow", "Presets", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
