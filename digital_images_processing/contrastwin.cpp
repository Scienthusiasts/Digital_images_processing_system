#include "contrastwin.h"
#include "ui_contrastwin.h"

contrastWin::contrastWin(childWindow *parent) :
    childWindow(parent),
    ui(new Ui::contrastWin)
{
    ui->setupUi(this);
    this->setWindowTitle("图像对比度调整");
    // 滑动调
    ui->horizontalSlider->setMinimum(0);
    ui->horizontalSlider->setMaximum(2000);
    ui->horizontalSlider->setSingleStep(1);
    ui->horizontalSlider_2->setMinimum(-500);
    ui->horizontalSlider_2->setMaximum(500);
    ui->horizontalSlider_2->setSingleStep(1);



    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(contrast_alpha(int)));
    connect(ui->horizontalSlider_2, SIGNAL(valueChanged(int)), this, SLOT(contrast_beta(int)));
    // 将槽函数与返回按钮绑定
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(sendSignal()));
    connect(ui->pushButton_2, SIGNAL(clicked(bool)), this, SLOT(back()));
}

// 在初始化该子窗口时调用，显示待处理的图像
void contrastWin::showImg(Mat img)
{
        originImg = img;
        QImage image = cvMat2QImage(img);
        // 将Qimage显示到label控件中
        ui->label->setPixmap(QPixmap::fromImage(image).scaled(ui->label->size()));
}

contrastWin::~contrastWin()
{
    delete ui;
}


// 图像对比度调整
void contrastWin::contrast(int param, double alpha, double beta){
    // 利用opencv进行数字图像处理
    ca.alpha = alpha;
    ca.beta = beta;
    Mat dst = ca.process(originImg, param);
    // 将Mat转为QImage
    QImage image = cvMat2QImage(dst);
    // 将Qimage显示到label控件中
    ui->label->setPixmap(QPixmap::fromImage(image).scaled(ui->label->size()));
    tempImg = dst;
}

void contrastWin::contrast_alpha(int alpha)
{
    double a = double(alpha) / 100.0;
    double beta = ui->horizontalSlider_2->value() / 4.0;
    contrast(0, a, beta);
    ui->lineEdit->setText(QString::number(a)); //将值显示在文本框中
}
void contrastWin::contrast_beta(int beta)
{
    double b = double(beta) / 4.0;
    double alpha = ui->horizontalSlider->value() / 100.0;
    cout<<alpha<<" "<<b<<endl;
    contrast(0, alpha, b);
    ui->lineEdit_2->setText(QString::number(b)); //将值显示在文本框中
}





