#include "include/roskcci/tab2socketclient.h"
#include "ui_tab2socketclient.h"
#include <QDebug>

Tab2SocketClient::Tab2SocketClient(int argc, char **argv, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab2SocketClient)
{
    ui->setupUi(this);
    pSocketClient = new SocketClient(this);
    ui->pPBsendButton->setEnabled(false);

    connect(ui->pPBRecvDataClear,SIGNAL(clicked()),ui->pTErecvData,SLOT(clear()));
    connect(ui->pPBServerConnect,SIGNAL(clicked(bool)),this,SLOT(slotConnectToServer(bool)));
    connect(pSocketClient,SIGNAL(sigSocketRecv(QString)),this,SLOT(slotSocketRecvUpdate(QString)));
    connect(ui->pPBsendButton,SIGNAL(clicked()),this, SLOT(slotSocketSendData()));
    connect(ui->pPBsendButton,SIGNAL(clicked()),this, SLOT(slotSocketSendData()));
    connect(this,SIGNAL(clicked()),this, SLOT(slotSocketSendData()));
}

void Tab2SocketClient::slotConnectToServer(bool check)
{
    bool bOk;
    if(check)
    {
        pSocketClient->slotConnectToServer(bOk);
        if(bOk)
        {
            ui->pPBServerConnect->setText("서버 해제");
            ui->pPBsendButton->setEnabled(true);
        }
        else
            ui->pPBServerConnect->setChecked(false);
    }
    else
    {
      pSocketClient->slotClosedByServer();
      ui->pPBServerConnect->setText("서버 연결");
      ui->pPBsendButton->setEnabled(false);
    }
}

void Tab2SocketClient::slotSocketRecvUpdate(QString strRecvData)
{
    QTime time = QTime::currentTime();
    QString strTime = time.toString();
    strRecvData.chop(1);  //'\n'제거
    strTime = strTime + " " + strRecvData;
    ui->pTErecvData->append(strTime);
    ui->pTErecvData->moveCursor(QTextCursor::End);

    if((strRecvData.indexOf("New connected") != -1) || \
            (strRecvData.indexOf("Already logged") != -1) || \
            (strRecvData.indexOf("Authentication Error") != -1))
        return;
    //수신포멧 : [LBC_QT]LED@1@ON
    //       @LBC_QT@LED@1@ON
    strRecvData.replace("[","@");
    strRecvData.replace("]","@");
    QStringList qlist = strRecvData.split("@"); //qlist[1] : 송신자ID

    int Len = qlist.size();
    double Data[10] = {0.0};


//    else if(strRecvData == "CONTROL@GO")
//    {
//        on_Control_toggled(bool checked);
//        return;

//        if (checked)
//            system("gnome-terminal -- sh -c \" roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch; bash\"");
//        else
//            system("pkill -f 'roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch'");
//    }
//    else if(strRecvData == "@LBC_QT@RETURN@GO")
//    {
//        Return();
//        return;
//    }

//    qDebug() << qlist[2];
    if(qlist[2] == "GOAL"){

        if (qlist[3] == "ROOM1")
            emit goGoalSig(0.35, -3.6, 0.0, 0.66);
        else if (qlist[3] == "ROOM2")
            emit goGoalSig(-0.19, -8.3, 0.0, 0.0);
        else if (qlist[3] == "ROOM3")
            emit goGoalSig(-3.3, -7.6, 0.0, 0.74);
        else if (qlist[3] == "ROOM4")
            emit goGoalSig(-1.94, 0.14, 0.0, 0.99);
        else if (qlist[3] == "RETURN")
            emit goGoalSig(0.54, -0.21, 0.0, 0.69);
        else
            emit goGoalSig(qlist[3].toDouble(),qlist[4].toDouble(),qlist[5].toDouble(),qlist[6].toDouble());
    }

/*    for(int i=0;i<Len;i++){
        //qDebug() << " i : " << i << " ," + qlist[i];

        if(i>1){
          for(int j=0; j<Len-2;j++)
          {
            Data[j] = qlist[i].toDouble();
          }

        }
    }
*/
//    foreach(QString str, qlist)
//        qDebug() << str;
/*
    if(strRecvData.indexOf("LED") != -1) {
        int iLedNo = qlist[3].toInt();
        int iNewLedNo = 0;
        if(qlist[4] == "ON") {
            iNewLedNo |= (0x01 << (iLedNo-1));
        } else {
            iNewLedNo &= ~(0x01 << (iLedNo-1));
        }
//        qDebug() << "iNewLedNo : " << iNewLedNo;
        emit sigLedWrite(iNewLedNo);
    }else if(((strRecvData.indexOf("LAMP") != -1) || (strRecvData.indexOf("PLUG") != -1)) || (strRecvData.indexOf("GAS") != -1)) {
//        qDebug() << "TEST " << strRecvData;
        emit sigTab3RecvData(strRecvData);
    } else if(strRecvData.indexOf("SENSOR") != -1) {
        emit sigTab4RecvData(strRecvData);
        emit sigTab5RecvData(strRecvData);
    }*/

}

void Tab2SocketClient::slotSocketSendData()
{
    QString strRecvId;
    QString strSendData;

    strRecvId = ui->pLErecvId->text();
    strSendData = ui->pLEsendData->text();
    if(strRecvId.isEmpty())
        strSendData = "[ALLMSG]" + strSendData;
    else
        strSendData = "["+strRecvId+"]" + strSendData;
    pSocketClient->slotSocketSendData(strSendData);
    ui->pLEsendData->clear();
}

void Tab2SocketClient::slotSocketSendData(QString strData)
{
    if(ui->pPBServerConnect->isChecked())
        pSocketClient->slotSocketSendData(strData);
}

void Tab2SocketClient::slotMotorUpSendData(void) {
    QString strData = "[ALLMSG]MOTOR@UP";

    if(ui->pPBServerConnect->isChecked())
        pSocketClient->slotSocketSendData(strData);
}

void Tab2SocketClient::slotMotorDownSendData(void) {
    QString strData = "[ALLMSG]MOTOR@DOWN";

    if(ui->pPBServerConnect->isChecked())
        pSocketClient->slotSocketSendData(strData);
}

Tab2SocketClient::~Tab2SocketClient()
{
    delete ui;
}

//void Tab2SocketClient::Auto()
//{
//    prosNode->go_goal("map", 0.0, 0.0, -0.755, 0.655);
//    //emit goGoalSig(0.0, 0.0, -0.755, 0.655);
//}

//void Tab2SocketClient::Return()
//{
//    prosNode->go_goal("map", 0.0, 0.0, -0.021, 0.999);
//}
