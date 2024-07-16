/********************************************************************************
** Form generated from reading UI file 'tab2socketclient.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB2SOCKETCLIENT_H
#define UI_TAB2SOCKETCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab2SocketClient
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pPBRecvDataClear;
    QPushButton *pPBServerConnect;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *pTErecvData;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *pLErecvId;
    QLineEdit *pLEsendData;
    QPushButton *pPBsendButton;

    void setupUi(QWidget *Tab2SocketClient)
    {
        if (Tab2SocketClient->objectName().isEmpty())
            Tab2SocketClient->setObjectName(QString::fromUtf8("Tab2SocketClient"));
        Tab2SocketClient->resize(439, 321);
        Tab2SocketClient->setFocusPolicy(Qt::StrongFocus);
        verticalLayout_2 = new QVBoxLayout(Tab2SocketClient);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Tab2SocketClient);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        pPBRecvDataClear = new QPushButton(Tab2SocketClient);
        pPBRecvDataClear->setObjectName(QString::fromUtf8("pPBRecvDataClear"));

        horizontalLayout->addWidget(pPBRecvDataClear);

        pPBServerConnect = new QPushButton(Tab2SocketClient);
        pPBServerConnect->setObjectName(QString::fromUtf8("pPBServerConnect"));
        pPBServerConnect->setCheckable(true);

        horizontalLayout->addWidget(pPBServerConnect);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pTErecvData = new QTextEdit(Tab2SocketClient);
        pTErecvData->setObjectName(QString::fromUtf8("pTErecvData"));

        horizontalLayout_2->addWidget(pTErecvData);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pLErecvId = new QLineEdit(Tab2SocketClient);
        pLErecvId->setObjectName(QString::fromUtf8("pLErecvId"));

        horizontalLayout_3->addWidget(pLErecvId);

        pLEsendData = new QLineEdit(Tab2SocketClient);
        pLEsendData->setObjectName(QString::fromUtf8("pLEsendData"));

        horizontalLayout_3->addWidget(pLEsendData);

        pPBsendButton = new QPushButton(Tab2SocketClient);
        pPBsendButton->setObjectName(QString::fromUtf8("pPBsendButton"));

        horizontalLayout_3->addWidget(pPBsendButton);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Tab2SocketClient);

        QMetaObject::connectSlotsByName(Tab2SocketClient);
    } // setupUi

    void retranslateUi(QWidget *Tab2SocketClient)
    {
        Tab2SocketClient->setWindowTitle(QCoreApplication::translate("Tab2SocketClient", "Form", nullptr));
        label->setText(QCoreApplication::translate("Tab2SocketClient", "Recv Data", nullptr));
        pPBRecvDataClear->setText(QCoreApplication::translate("Tab2SocketClient", "Clear", nullptr));
        pPBServerConnect->setText(QCoreApplication::translate("Tab2SocketClient", "Connect", nullptr));
        pPBsendButton->setText(QCoreApplication::translate("Tab2SocketClient", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab2SocketClient: public Ui_Tab2SocketClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB2SOCKETCLIENT_H
