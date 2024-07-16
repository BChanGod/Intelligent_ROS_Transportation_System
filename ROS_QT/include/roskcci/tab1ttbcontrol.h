#ifndef __TAB1TTBCONTROL_H
#define __TAB1TTBCONTROL_H

#include "rosnode.h"
#include <QWidget>
#include <QButtonGroup>
#include <QPushButton>
#include <iostream>
#include <array>
#include <QProcess>
#include <QVBoxLayout>
#include <QThread>

namespace Ui {
class Tab1TTBControl;
}

class Tab1TTBControl : public QWidget
{
    Q_OBJECT

public:
    explicit Tab1TTBControl(int argc, char **argv, QWidget *parent = nullptr);
    ~Tab1TTBControl();

private:
    Ui::Tab1TTBControl *ui;
    RosNode *prosNode;
    QButtonGroup *bg;
    QWidget *widget;

    QProcess *pro;

signals:
    void motorUpSig(void);
    void motorDownSig(void);

private slots:
    void goal_Pub();
    void goal_PubSlot(double, double, double, double);

    void on_room1_clicked();
    void on_room2_clicked();
    void on_room3_clicked();
    void on_room4_clicked();
    void on_Return_clicked();
    void on_Control_toggled(bool checked);

    void set_Pub();
    void DebugConsole(QString);
    void slotLdsReceive(float *);

    void on_Up_clicked();
    void on_Down_clicked();
    void on_navi_toggled(bool checked);
};
#endif // TAB1DEVCONTROL_H
