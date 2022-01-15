#include "childwindow.h"
#include "ui_childwindow.h"

childWindow::childWindow(QWidget *parent) :
    QWidget(parent)
{
}

// 槽函数传输信号(保存)
void childWindow::sendSignal()
{
    emit sendImg(tempImg, true);
    this->hide();
}
// 槽函数传输信号(取消)
void childWindow::back()
{
    emit sendImg(tempImg, false);
    this->hide();
}
