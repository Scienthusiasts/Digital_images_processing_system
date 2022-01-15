#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDialog>
#include <QString>
#include <QLabel>
#include <QMouseEvent>
#include <QPixmap>
#include <QPainter>
#include <QPushButton>
#include <stack>
#include "cv_dll.h"
#include "cv_dll_global.h"

#include "gauwindow.h"
#include "contrastwin.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    imgManager<Mat> imgContainer;          //  图像管理类
    void showHist(QLabel*, Mat);           // 显示图像直方图
    void imgUpdate(QLabel*, QLabel*, Mat); // 控件更新显示
    void edgeFilter(int, int ksize=3);     // 边缘提取
    void imgBeautify(int);                 // 图像美化
    void colorBalance(int);                 // 白平衡
    void RGBImg2Gray(int, int chanel=0);   // 灰度图

    bool warning(int param);   //提示弹窗
    // 构造函数和析构函数
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


    // 事件过滤器
    bool eventFilter(QObject*, QEvent*);
    void paint(QLabel *);  //绘图事件
    void mouseReleaseEvent(QMouseEvent *event);  //舍去


private:
    Ui::MainWindow *ui;  // ui界面
    // 子窗口
    gauwindow gw;    //高斯滤波界面实例
    contrastWin cw;  //对比度调节界面实例
    bool imgOpened = false;  //标记是否是新建文件
    // 缩放尺度
    double scale_win1 = 1.0; // 窗口1缩放尺度
    double scale_win2 = 1.0;
    QPoint mouse_win1; // 获取鼠标实时坐标(相对窗口1)
    QPoint mouse_win2; // 获取鼠标实时坐标(相对窗口2)


    // 多态性！！以基类指针类型封装算法的实例对象
    map<string, algorithm<Mat>*> imgAlgo = {
        {"edge", new EdgeFilter},
        {"beau", new ImgBeautify},
        {"hist", new HistProcess},
        {"gray", new GrayImg}
    };


private slots:
//    void paintEvent(QPaintEvent *event);
    // 接收子窗口传来的信号
    void receiveImg(Mat, bool);   //
    void change2gauWindow();      // 切换至高斯模糊处理界面
    void change2contrastWindow(); // 切换至对比度处理界面

    void openImg();      // 从磁盘中选取待处理图像
    string save();         // 保存图像
    void exit();         // 退出系统
    void saveAndExit();  // 保存并退出
    void withdraw();     // 撤销操作
    void forward();      // 前进操作
    void clear();        // 还原操作

    void on_action_triggered();
    void on_action_3_triggered();
    void on_action_4_triggered();
    void on_action_6_triggered();
    void on_action_7_triggered();
    void on_actionSobel_X_triggered();
    void on_actionSobel_Y_triggered();
    void on_actionMean_triggered();
    void on_actionWeight_Mean_triggered();
    void on_actionr_channel_triggered();
    void on_actiong_channel_triggered();
    void on_actionb_channel_triggered();
    void on_action_5_triggered();
    void on_action_2_triggered();
    void on_action_8_triggered();
    void on_action_9_triggered();
    void on_action_10_triggered();
};

#endif // MAINWINDOW_H
