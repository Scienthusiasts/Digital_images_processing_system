#include "gauwindow.h"
#include "ui_gauwindow.h"

gauwindow::gauwindow(childWindow *parent) :
    childWindow(parent),
    ui(new Ui::gauwindow)
{
    ui->setupUi(this);
    this->setWindowTitle("图像模糊处理");
    // 滑动调
    ui->horizontalSlider->setMinimum(1);
    ui->horizontalSlider->setMaximum(100);
    ui->horizontalSlider->setSingleStep(1);
    ui->horizontalSlider_2->setMinimum(1);
    ui->horizontalSlider_2->setMaximum(1000);
    ui->horizontalSlider_2->setSingleStep(1);

    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(showValue(int)));
    connect(ui->horizontalSlider_2, SIGNAL(valueChanged(int)), this, SLOT(showValueDouble(int)));
    connect(ui->pushButton_3, SIGNAL(clicked(bool)), this, SLOT(gauBlur()));
    connect(ui->pushButton_4, SIGNAL(clicked(bool)), this, SLOT(meanBlur()));
    connect(ui->pushButton_5, SIGNAL(clicked(bool)), this, SLOT(midBlur()));
    connect(ui->pushButton_6, SIGNAL(clicked(bool)), this, SLOT(bilBlur()));
    // 将槽函数与返回按钮绑定
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(sendSignal()));
    connect(ui->pushButton_2, SIGNAL(clicked(bool)), this, SLOT(back()));
}

gauwindow::~gauwindow()
{
    delete ui;
}

// 在初始化该子窗口时调用，显示待处理的图像
void gauwindow::showImg(Mat img)
{
        originImg = img;
        QImage image = cvMat2QImage(img);
        // 将Qimage显示到label控件中
        ui->label->setPixmap(QPixmap::fromImage(image).scaled(ui->label->size()));
}




// 图像模糊
void gauwindow::imgBlur(int param, int ksize, double sigmaColor)
{
    ksize  = ksize * 2 + 1;
    Mat img = originImg;
    // 进行数字图像处理
    blur.ksize = ksize;
    blur.sigmaColor = sigmaColor;
    Mat dst = blur.process(img, param);
    // 将Mat转为QImage
    QImage image = cvMat2QImage(dst);
    // 将Qimage显示到label控件中
    ui->label->setPixmap(QPixmap::fromImage(image).scaled(ui->label->size()));
    tempImg = dst;
}

// 在文本框内显示滤波核大小
void gauwindow::showValue(int val)
{
        val  = val * 2 + 1;
    ui->lineEdit->setText(QString::number(val)); //将值显示在文本框中
}
void gauwindow::showValueDouble(int val)
{
      double v =  val / 10;
    ui->lineEdit_2->setText(QString::number(v)); //将值显示在文本框中
}
// 均值滤波
void gauwindow::meanBlur(){
    int ksize = ui->horizontalSlider->value();
    imgBlur(0, ksize);
}
// 高斯滤波
void gauwindow::gauBlur(){
    int ksize = ui->horizontalSlider->value();
    imgBlur(1, ksize);
}
// 中值滤波
void gauwindow::midBlur(){
    int ksize = ui->horizontalSlider->value();
    imgBlur(2, ksize);
}
// 双边滤波
void gauwindow::bilBlur(){
    int ksize = ui->horizontalSlider->value();
    double sigmaColor = ui->horizontalSlider_2->value() / 10.0;
    imgBlur(3, ksize, sigmaColor);
}






