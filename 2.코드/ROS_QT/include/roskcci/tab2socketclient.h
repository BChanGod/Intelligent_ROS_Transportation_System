#ifndef TAB2SOCKETCLIENT_H
#define TAB2SOCKETCLIENT_H

#include <QWidget>
#include <QTime>
#include "socketclient.h"
#include "rosnode.h"
#include <string>
#include "tab1ttbcontrol.h"

namespace Ui {
class Tab2SocketClient;
}

class Tab2SocketClient : public QWidget
{
    Q_OBJECT

public:
    explicit Tab2SocketClient(int argc, char **argv, QWidget *parent = nullptr);
    ~Tab2SocketClient();

private:
    Ui::Tab2SocketClient *ui;
    SocketClient * pSocketClient;

    RosNode *prosNode;
//    void Auto();
//    void Return();

private slots:
    void slotConnectToServer(bool);
    void slotSocketRecvUpdate(QString);
    void slotSocketSendData();
    void slotSocketSendData(QString);
    void slotMotorUpSendData(void);
    void slotMotorDownSendData(void);

signals:
    void sigLedWrite(int);
    void goGoalSig(double, double, double, double);

};

#endif // TAB2SOCKETCLIENT_H
