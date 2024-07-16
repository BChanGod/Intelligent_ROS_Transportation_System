#include "include/roskcci/tab1ttbcontrol.h"
#include "ui_tab1ttbcontrol.h"

Tab1TTBControl::Tab1TTBControl(int argc, char **argv, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab1TTBControl)
{
    ui->setupUi(this); // UI set
    prosNode = new RosNode(argc, argv); // RosNode 객체 초기화
    prosNode->pLcamView = ui->pLcamView; // RosNode에게 UI의 pLcamView 포인터터 설정
    prosNode->start();

    pro = new QProcess(this);

    connect(ui->pPButtonGO,SIGNAL(clicked()),this,SLOT(goal_Pub()));
//    connect(ui->room1,SIGNAL(clicked()),this,SLOT(on_room1_clicked()));
//    connect(ui->room2,SIGNAL(clicked()),this,SLOT(on_room2_clicked()));
//    connect(ui->room3,SIGNAL(clicked()),this,SLOT(on_room3_clicked()));
//    connect(ui->room4,SIGNAL(clicked()),this,SLOT(on_room4_clicked()));
//    connect(ui->Control, SIGNAL(toggled(bool)), this, SLOT(on_Control_toggled(bool)));
//    connect(ui->Return,SIGNAL(clicked()),this,SLOT(on_Return_clicked()));
    qRegisterMetaType<float>("float"); // 사용자 정의 타입 등록
    connect(prosNode,SIGNAL(sigLdsReceive(float *)),this,SLOT(slotLdsReceive(float *)));
    connect(prosNode, SIGNAL(rosShutdown()), this, SLOT(close()));
}

Tab1TTBControl::~Tab1TTBControl() // 여기서 인스턴스 삭제하는 이유는 메모리에서 해제하기 위해서(자원 관리, 메모리 누수 방지, 정상적인 프로그램 종료)
{
    delete ui;
    delete prosNode;
}
void Tab1TTBControl::goal_Pub() // go 버튼 클릭 시, 좌표 전달
{
   prosNode->go_goal("map",ui->pDSBox_X->value(),ui->pDSBox_Y->value(),ui->pDSBox_Z->value(),ui->pDSBox_W->value());
}

void Tab1TTBControl::goal_PubSlot(double x, double y, double z, double w)
{
   prosNode->go_goal("map",x,y,z,w);
}

void Tab1TTBControl::on_room1_clicked() // AutoMode 4개로 나누었다.
{
    prosNode->go_goal("map", 6.15, -0.04, -0.7, 0.99);
    qDebug() << "room1";
}

void Tab1TTBControl::on_room2_clicked()
{
    prosNode->go_goal("map", 6.47, -3.192, -1, 0.0016);
    qDebug() << "room2";
}

void Tab1TTBControl::on_room3_clicked()
{
    prosNode->go_goal("map", -2.25, -2.614, 0.7, 0.71);
    qDebug() << "room3";
}

void Tab1TTBControl::on_room4_clicked()
{
    prosNode->go_goal("map", -2.0, 0.0, 0.0, 0.99);
    qDebug() << "room4";
}

void Tab1TTBControl::on_Control_toggled(bool checked) // 수동 모드
{
    // system() 함수는 보안 문제와 다양한 플랫폼에서의 이식성 문제가 있을 수 있다.
    if (checked)
    {
        // gnome-terminal > 새로운 터미널 생성 후 명령어 실행, bash shell을 실행하여 terminal 닫지 않고 사용자 입력 대기
        system("gnome-terminal -- sh -c \" roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch; bash\"");
        qDebug() << "ON";
    }
    else
    {
        // 해당 명령어와 일치하는 process 강제 종료
        system("pkill -f 'roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch'");
        qDebug() << "OFF";
    }
}

void Tab1TTBControl::on_Return_clicked() // 복귀 모드
{
    prosNode->go_goal("map", -0.15, -0.01, 0.0, 0.99);
    qDebug() << "Return";
}

void Tab1TTBControl::set_Pub()
{
   prosNode->set_goal("map",0.83, 2.92, 0.0, 0.72);
}

void Tab1TTBControl::DebugConsole(QString)
{

}
void Tab1TTBControl::slotLdsReceive(float * pscanData)
{
    //qDebug() << "pscanData[0] : " << pscanData[0];
    ui->lcdNumber_1->display(pscanData[0]);
    ui->lcdNumber_2->display(pscanData[1]);
    ui->lcdNumber_3->display(pscanData[2]);
    ui->lcdNumber_4->display(pscanData[3]);
}

void Tab1TTBControl::on_Up_clicked()
{
    emit motorUpSig();
}

void Tab1TTBControl::on_Down_clicked()
{
    emit motorDownSig();
}

void Tab1TTBControl::on_navi_toggled(bool checked)
{
    if (checked)
    {
        system("gnome-terminal -- sh -c \" roslaunch turtlebot3_navigation turtlebot3_navigation.launch map_file:=$HOME/map.yaml; bash\"");
        system("gnome-terminal -- sh -c \" /home/ubuntu/rosmap/Ros_Qt5_Gui_App/mainwindow/ros_qt5_gui_app; bash\"");
        qDebug() << "Navigation started";
    }
    else
    {
        // 해당 명령어와 일치하는 process 강제 종료
        system("pkill -f 'roslaunch turtlebot3_navigation turtlebot3_navigation.launch'");
        system("pkill -f '/home/ubuntu/rosmap/Ros_Qt5_Gui_App/mainwindow/ros_qt5_gui_app'");
        qDebug() << "Navigation close";
    }
}
