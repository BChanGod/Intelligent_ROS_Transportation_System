/********************************************************************************
** Form generated from reading UI file 'tab1ttbcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB1TTBCONTROL_H
#define UI_TAB1TTBCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab1TTBControl
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLCDNumber *lcdNumber_1;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pPButtonGO;
    QDoubleSpinBox *pDSBox_X;
    QDoubleSpinBox *pDSBox_Y;
    QDoubleSpinBox *pDSBox_W;
    QDoubleSpinBox *pDSBox_Z;
    QLabel *AUTO_MODE;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *room1;
    QPushButton *room2;
    QPushButton *room3;
    QPushButton *room4;
    QLabel *MANUAL_MODE;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Control;
    QLabel *RETURN_MODE;
    QPushButton *Return;
    QLabel *RETURN_MODE_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *Up;
    QPushButton *Down;
    QLabel *pLcamView;
    QPushButton *navi;

    void setupUi(QWidget *Tab1TTBControl)
    {
        if (Tab1TTBControl->objectName().isEmpty())
            Tab1TTBControl->setObjectName(QString::fromUtf8("Tab1TTBControl"));
        Tab1TTBControl->resize(402, 388);
        verticalLayout_2 = new QVBoxLayout(Tab1TTBControl);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(Tab1TTBControl);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLineWidth(3);

        horizontalLayout_6->addWidget(label);

        lcdNumber_1 = new QLCDNumber(Tab1TTBControl);
        lcdNumber_1->setObjectName(QString::fromUtf8("lcdNumber_1"));
        lcdNumber_1->setDigitCount(4);

        horizontalLayout_6->addWidget(lcdNumber_1);

        lcdNumber_2 = new QLCDNumber(Tab1TTBControl);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setDigitCount(4);

        horizontalLayout_6->addWidget(lcdNumber_2);

        lcdNumber_3 = new QLCDNumber(Tab1TTBControl);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setDigitCount(4);

        horizontalLayout_6->addWidget(lcdNumber_3);

        lcdNumber_4 = new QLCDNumber(Tab1TTBControl);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setDigitCount(4);

        horizontalLayout_6->addWidget(lcdNumber_4);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pPButtonGO = new QPushButton(Tab1TTBControl);
        pPButtonGO->setObjectName(QString::fromUtf8("pPButtonGO"));

        horizontalLayout->addWidget(pPButtonGO);

        pDSBox_X = new QDoubleSpinBox(Tab1TTBControl);
        pDSBox_X->setObjectName(QString::fromUtf8("pDSBox_X"));

        horizontalLayout->addWidget(pDSBox_X);

        pDSBox_Y = new QDoubleSpinBox(Tab1TTBControl);
        pDSBox_Y->setObjectName(QString::fromUtf8("pDSBox_Y"));

        horizontalLayout->addWidget(pDSBox_Y);

        pDSBox_W = new QDoubleSpinBox(Tab1TTBControl);
        pDSBox_W->setObjectName(QString::fromUtf8("pDSBox_W"));

        horizontalLayout->addWidget(pDSBox_W);

        pDSBox_Z = new QDoubleSpinBox(Tab1TTBControl);
        pDSBox_Z->setObjectName(QString::fromUtf8("pDSBox_Z"));

        horizontalLayout->addWidget(pDSBox_Z);


        verticalLayout->addLayout(horizontalLayout);

        AUTO_MODE = new QLabel(Tab1TTBControl);
        AUTO_MODE->setObjectName(QString::fromUtf8("AUTO_MODE"));
        AUTO_MODE->setLineWidth(3);
        AUTO_MODE->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(AUTO_MODE);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        room1 = new QPushButton(Tab1TTBControl);
        room1->setObjectName(QString::fromUtf8("room1"));

        horizontalLayout_4->addWidget(room1);

        room2 = new QPushButton(Tab1TTBControl);
        room2->setObjectName(QString::fromUtf8("room2"));
        room2->setCheckable(false);

        horizontalLayout_4->addWidget(room2);

        room3 = new QPushButton(Tab1TTBControl);
        room3->setObjectName(QString::fromUtf8("room3"));
        room3->setCheckable(false);

        horizontalLayout_4->addWidget(room3);

        room4 = new QPushButton(Tab1TTBControl);
        room4->setObjectName(QString::fromUtf8("room4"));

        horizontalLayout_4->addWidget(room4);


        verticalLayout->addLayout(horizontalLayout_4);

        MANUAL_MODE = new QLabel(Tab1TTBControl);
        MANUAL_MODE->setObjectName(QString::fromUtf8("MANUAL_MODE"));
        MANUAL_MODE->setLineWidth(3);
        MANUAL_MODE->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(MANUAL_MODE);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Control = new QPushButton(Tab1TTBControl);
        Control->setObjectName(QString::fromUtf8("Control"));
        Control->setCheckable(true);

        horizontalLayout_3->addWidget(Control);


        verticalLayout->addLayout(horizontalLayout_3);

        RETURN_MODE = new QLabel(Tab1TTBControl);
        RETURN_MODE->setObjectName(QString::fromUtf8("RETURN_MODE"));
        RETURN_MODE->setLineWidth(3);
        RETURN_MODE->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(RETURN_MODE);

        Return = new QPushButton(Tab1TTBControl);
        Return->setObjectName(QString::fromUtf8("Return"));

        verticalLayout->addWidget(Return);

        RETURN_MODE_2 = new QLabel(Tab1TTBControl);
        RETURN_MODE_2->setObjectName(QString::fromUtf8("RETURN_MODE_2"));
        RETURN_MODE_2->setLineWidth(3);
        RETURN_MODE_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(RETURN_MODE_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        Up = new QPushButton(Tab1TTBControl);
        Up->setObjectName(QString::fromUtf8("Up"));

        horizontalLayout_7->addWidget(Up);

        Down = new QPushButton(Tab1TTBControl);
        Down->setObjectName(QString::fromUtf8("Down"));
        Down->setCheckable(false);

        horizontalLayout_7->addWidget(Down);


        verticalLayout->addLayout(horizontalLayout_7);

        pLcamView = new QLabel(Tab1TTBControl);
        pLcamView->setObjectName(QString::fromUtf8("pLcamView"));

        verticalLayout->addWidget(pLcamView);

        navi = new QPushButton(Tab1TTBControl);
        navi->setObjectName(QString::fromUtf8("navi"));

        verticalLayout->addWidget(navi);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(10, 6);

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Tab1TTBControl);

        QMetaObject::connectSlotsByName(Tab1TTBControl);
    } // setupUi

    void retranslateUi(QWidget *Tab1TTBControl)
    {
        Tab1TTBControl->setWindowTitle(QCoreApplication::translate("Tab1TTBControl", "Form", nullptr));
        label->setText(QCoreApplication::translate("Tab1TTBControl", "LaserScan", nullptr));
        pPButtonGO->setText(QCoreApplication::translate("Tab1TTBControl", "GO", nullptr));
        AUTO_MODE->setText(QCoreApplication::translate("Tab1TTBControl", "AUTO MODE", nullptr));
        room1->setText(QCoreApplication::translate("Tab1TTBControl", "\354\260\275\352\263\2401", nullptr));
        room2->setText(QCoreApplication::translate("Tab1TTBControl", "\354\260\275\352\263\2402", nullptr));
        room3->setText(QCoreApplication::translate("Tab1TTBControl", "\354\260\275\352\263\2403", nullptr));
        room4->setText(QCoreApplication::translate("Tab1TTBControl", "\354\260\275\352\263\2404", nullptr));
        MANUAL_MODE->setText(QCoreApplication::translate("Tab1TTBControl", "MANUAL MODE", nullptr));
        Control->setText(QCoreApplication::translate("Tab1TTBControl", "Control", nullptr));
        RETURN_MODE->setText(QCoreApplication::translate("Tab1TTBControl", "RETURN MODE", nullptr));
        Return->setText(QCoreApplication::translate("Tab1TTBControl", "Return", nullptr));
        RETURN_MODE_2->setText(QCoreApplication::translate("Tab1TTBControl", "STM32 Command", nullptr));
        Up->setText(QCoreApplication::translate("Tab1TTBControl", "UP", nullptr));
        Down->setText(QCoreApplication::translate("Tab1TTBControl", "DOWN", nullptr));
        pLcamView->setText(QCoreApplication::translate("Tab1TTBControl", ".", nullptr));
        navi->setText(QCoreApplication::translate("Tab1TTBControl", "NAVI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab1TTBControl: public Ui_Tab1TTBControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB1TTBCONTROL_H
