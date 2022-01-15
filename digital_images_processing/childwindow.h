#ifndef CHILDWINDOW_H
#define CHILDWINDOW_H

#include <QWidget>
#include <QDebug>
#include "cv_dll.h"
#include "cv_dll_global.h"
namespace Ui {
class childWindow;
}

class childWindow : public QWidget
{
    Q_OBJECT

protected:
    Mat originImg;
    Mat tempImg;
public:
    explicit childWindow(QWidget *parent = nullptr);
    // 纯虚函数， 需要在子类实现(显示图像)
    virtual void showImg(Mat img) = 0;

signals:
    void sendImg(Mat, bool);  // 信号(给父窗口传输处理好的图像)
private slots:
    virtual void sendSignal();     // 槽函数
    virtual void back();
};



#endif // CHILDWINDOW_H
