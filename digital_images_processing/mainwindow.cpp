#include "mainwindow.h"
#include "ui_mainwindow.h"


// 构造函数
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("简易数字图像处理");
    this->setWindowIcon(QIcon(":/new/prefix1/icon/title.png"));

    ui->label->installEventFilter(this);
    ui->label_2->installEventFilter(this);

    ui->label_7->setPixmap(QPixmap("C:\\Users\\S.E\\Desktop\\c++\\opencv_qt\\icon\\1.png").scaled(ui->label_7->size()));
    // connect()函数实现的是信号与槽的关联
    // 将接收函数与子窗口的信号绑定
    connect(&gw, SIGNAL(sendImg(Mat, bool)), this, SLOT(receiveImg(Mat, bool)));
    connect(&cw, SIGNAL(sendImg(Mat, bool)), this, SLOT(receiveImg(Mat, bool)));

    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(openImg()));
    connect(ui->pushButton_8, SIGNAL(clicked(bool)), this, SLOT(save()));
    connect(ui->pushButton_11, SIGNAL(clicked(bool)), this, SLOT(exit()));
    connect(ui->pushButton_13, SIGNAL(clicked(bool)), this, SLOT(saveAndExit()));
    connect(ui->pushButton_9, SIGNAL(clicked(bool)), this, SLOT(withdraw()));
    connect(ui->pushButton_12, SIGNAL(clicked(bool)), this, SLOT(forward()));
    connect(ui->pushButton_10, SIGNAL(clicked(bool)), this, SLOT(clear()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


// 接收函数接收子窗口的信号
void MainWindow::receiveImg(Mat img, bool judge)
{
    if(judge){
        imgContainer.push(img);
        // 更新图像显示界面和直方图
        ui->label->update();
        ui->label_2->update();
        showHist(ui->label_4, img);
    }
    this->show();
}
// 跳转到子窗口
void MainWindow::change2gauWindow()
{
    if(imgContainer.isEmpty()){
        warning(0);
        return;
    }
    this->hide();
    gw.showImg(imgContainer.top(0));
    gw.show();
}
// 跳转到子窗口
void MainWindow::change2contrastWindow()
{
    if(imgContainer.isEmpty()){
        warning(0);
        return;
    }
    this->hide();
    cw.showImg(imgContainer.top(0));
    cw.show();
}



// 显示图像直方图
void MainWindow::showHist(QLabel* label, Mat img)
{
    Mat hist = HistProcess::drawHist(img);
    // 将Mat转为QImage
    QImage histImg = cvMat2QImage(hist);
    label->setPixmap(QPixmap::fromImage(histImg).scaled(label->size()));
}
// 更新图像显示界面和直方图
void MainWindow::imgUpdate(QLabel* imgLabel, QLabel* histLabel, Mat img)
{
    // 将Mat转为QImage
    QImage image = cvMat2QImage(img);
    imgOpened = true; //先禁止触发paintEvent事件
    //仅仅只是导入之后的图片仍然是原来的大小，这个时候我们需要缩放为界面的大小(按原图比例缩放)
    imgLabel->setPixmap(QPixmap::fromImage(image).scaled(imgLabel->size(),Qt::KeepAspectRatio, Qt::SmoothTransformation));
    imgLabel->setAlignment(Qt::AlignCenter); // 图像居中

    // 显示图像直方图
    showHist(histLabel, img);
}

// 选择图像文件并打开
void MainWindow::openImg()
{   // 若当前有正在处理的图像，弹出提示框
    if(!warning(1)){return;}
    // 打开文件需要清空先前的处理记录
    imgContainer.cleanAll();
    ui->label_2->clear();
    QString OpenFile, OpenFilePath;
    QImage image;
    // getOpenFileName获取文件路径并转化为字符串
    OpenFile = QFileDialog::getOpenFileName(this,
        "please choose an image file",
        "",
        "Image Files(*.jpg *.png *.bmp *.pgm *.pbm);;All(*.*)");
    if (OpenFile != "")
    {
        if (image.load(OpenFile))
        {
            //在文本框中显示图片信息(路径)
            OpenFilePath = QFileInfo(OpenFile).filePath();
            ui->lineEdit->setText(OpenFilePath);
            // 更新缓存
            Mat img = imread(OpenFilePath.toStdString());
            imgContainer.push(img);
            imgContainer.setOrigin(img);
            // 更新图像显示界面和直方图
            imgOpened = true; //先禁止触发paintEvent事件
            // 更新界面图像的显示
            imgUpdate(ui->label, ui->label_3, imgContainer.top(0));
        }
    }
}

// 保存处理后图像
string MainWindow::save()
{
    if(warning(0)){return "";}
    QString filename = QFileDialog::getSaveFileName(this,tr("Save Image"),"",tr("Images (*.png *.bmp *.jpg)")); //选择路径
    string fileAsSave = filename.toStdString();
    if (fileAsSave != "")imwrite(fileAsSave, imgContainer.top(0));
    return fileAsSave;
}
void MainWindow::saveAndExit()
{
    if(warning(0)){return;}
    string s = save();
    if(s != "")QApplication::exit();
}
void MainWindow::exit(){QApplication::exit();}

//撤销操作
void MainWindow::withdraw()
{
    if(warning(0)){return;}
    // 更新图像显示界面和直方图
    imgUpdate(ui->label_2, ui->label_4, imgContainer.back());
    imgUpdate(ui->label, ui->label_3, *imgContainer.getOrigin());
}
void MainWindow::forward()
{
    if(warning(0)){return;}
    // 更新图像显示界面和直方图
    imgUpdate(ui->label_2, ui->label_4, imgContainer.forward());
    imgUpdate(ui->label, ui->label_3, *imgContainer.getOrigin());
}

// 清空操作
void MainWindow::clear()
{
    if(warning(0)){return;}
    // 更新图像显示界面和直方图
    imgUpdate(ui->label_2, ui->label_4, imgContainer.cleanDealed());
    imgUpdate(ui->label, ui->label_3, *imgContainer.getOrigin());
}

// 弹出提示框
bool MainWindow::warning(int param)
{
    switch(param){
    // 如果未打开图像
    case 0:
        if(imgContainer.isEmpty()){
            QMessageBox msg(
                        QMessageBox::Warning,
                        tr("提示"),
                        "请先选择要处理的图像",
                        0, this);
            msg.addButton(tr("确定"), QMessageBox::AcceptRole);
            if(msg.exec() == QMessageBox::AcceptRole) qDebug("ssds");
            return true;
        }
        return false;
    case 1:
        // 如果要重新选择图像
        if(imgContainer.isEmpty()) return true;
        QMessageBox msg(
                    QMessageBox::Warning,
                    tr("提示"),
                    "重新载入图像，将清除当前记录！",
                    0, this);
        msg.addButton(tr("确定"), QMessageBox::AcceptRole);
        msg.addButton(tr("取消"), QMessageBox::RejectRole);
        int clicked = msg.exec();
        if(clicked == QMessageBox::AcceptRole) return true;
        if(clicked == QMessageBox::RejectRole) return false;
    }
}




// 边缘提取
void MainWindow::edgeFilter(int param, int ksize)
{
    if(warning(0)){return;}
    Mat img = imgContainer.top(0);
    // 进行数字图像处理
    imgAlgo["edge"]->ksize=ksize;
    Mat dst = imgAlgo["edge"]->process(img, param);
    // 已处理图像存入缓存
    imgContainer.push(dst);
    // 更新图像显示界面和直方图
    imgUpdate(ui->label_2, ui->label_4, dst);
}

// 图像美化
void MainWindow::imgBeautify(int param)
{
    if(warning(0)){return;}
    Mat img = imgContainer.top(0);
    // 进行数字图像处理
    Mat dst = imgAlgo["beau"]->process(img, param);
    // 已处理图像存入缓存
    imgContainer.push(dst);
    // 更新图像显示界面和直方图
    imgUpdate(ui->label_2, ui->label_4, dst);
}


// 白平衡处理
void MainWindow::colorBalance(int param)
{
    if(warning(0)){return;}
    Mat img = imgContainer.top(0);
    // 进行数字图像处理
    Mat dst = imgAlgo["hist"]->process(img, param);
    // 已处理图像存入缓存
    imgContainer.push(dst);
    // 更新图像显示界面和直方图
    imgUpdate(ui->label_2, ui->label_4, dst);
}

// 灰度图
void MainWindow::RGBImg2Gray(int param, int chanel)
{

    if(warning(0)){return;}
    //如果上一张处理的图像是灰度图
    Mat img;
    //如果上一张处理的图像不是灰度图
    if(imgContainer.getTemp()==NULL){
        img = imgContainer.top(0);
        imgContainer.setTemp(img);
    }else{
        img = *imgContainer.getTemp();
    }
    // 利用opencv进行数字图像处理
    imgAlgo["gray"]->channel = chanel;
    Mat dst = imgAlgo["gray"]->process(img, param);
    // 已处理图像存入缓存
    imgContainer.push(dst);
    // 更新图像显示界面和直方图
    imgUpdate(ui->label_2, ui->label_4, dst);
}







void MainWindow::on_action_triggered(){change2gauWindow();}       // 高斯模糊
void MainWindow::on_action_2_triggered(){change2gauWindow();}     //均值滤波
void MainWindow::on_action_8_triggered(){change2gauWindow();}     // 中值滤波
void MainWindow::on_action_9_triggered(){change2gauWindow();}     // 双边滤波
void MainWindow::on_action_3_triggered(){edgeFilter(0);}          // 拉普拉斯滤波
void MainWindow::on_action_4_triggered(){change2contrastWindow();}// 对比度处理
void MainWindow::on_action_6_triggered(){imgBeautify(0);}         // 锐化
void MainWindow::on_action_7_triggered(){imgBeautify(1);}         // 浮雕效果
void MainWindow::on_actionSobel_X_triggered(){edgeFilter(1);}     // Sobel X
void MainWindow::on_actionSobel_Y_triggered(){edgeFilter(2);}     // Sobel Y
void MainWindow::on_action_5_triggered(){colorBalance(0);}         // 直方图均衡化
void MainWindow::on_action_10_triggered(){colorBalance(1);}        // 灰度世界
// 各种图像灰度化方法
void MainWindow::on_actionMean_triggered(){RGBImg2Gray(1);}
void MainWindow::on_actionWeight_Mean_triggered(){RGBImg2Gray(2);} // 加权灰度化
void MainWindow::on_actionr_channel_triggered(){RGBImg2Gray(0,2);} //
void MainWindow::on_actiong_channel_triggered(){RGBImg2Gray(0,1);}
void MainWindow::on_actionb_channel_triggered(){RGBImg2Gray(0,0);}

























////鼠标按下事件
//void MainWindow::mousePressEvent(QMouseEvent *event)
//{
//    // 获取鼠标与控件1的相对坐标
//    int x1 = event->x()-ui->label->x();
//    int y1 = event->y()-ui->label->y();
//    int w1 = ui->label->width();
//    int h1 = ui->label->height();
//    // 获取鼠标与控件2的相对坐标
//    int x2 = event->x()-ui->label_2->x();
//    int y2 = event->y()-ui->label_2->y();
//    int w2 = ui->label_2->width();
//    int h2 = ui->label_2->height();
//    // 判断是否在控件范围内
//    if(x1>0&&x1<w1 && y1>23&&y1<h1) {
//        choose_win1 = true;
//        choose_win2 = false;
//    }
//    else if(x2>0&&x2<w2 && y2>23&&y2<h2) {
//        choose_win1 = false;
//        choose_win2 = true;
//    }
//    else{
//        choose_win1 = false;
//        choose_win2 = false;
//    }
//}

//鼠标释放事件
void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    // 获取label控件实时坐标
    int label_x = ui->label->x();
    int label_y = ui->label->y();

    QString str="("+QString::number(event->x()-label_x)+","+QString::number(event->y()-label_y)+")";
    if(event->button()==Qt::LeftButton)
    {
    ui->lineEdit->setText(tr("鼠标左键释放:")+str);
    }
}





bool MainWindow::eventFilter(QObject* watched, QEvent* e)
{
    if(imgContainer.isEmpty()) return false;
    if(watched == ui->label || watched == ui->label_2)
    {
        QLabel * wat = (QLabel *)watched;
        // 鼠标滚轮滚动事件
        if(e->type() == QEvent::Wheel)
        {
            imgOpened = false;
            QWheelEvent *mouseEvent=(QWheelEvent *)e;
            QPoint numDegrees;                                     // 定义指针类型参数numDegrees用于获取滚轮转角
            numDegrees = mouseEvent->angleDelta();                      // 获取滚轮转角
            int step = 0;                                          // 设置中间参数step用于将获取的数值转换成整数型
            if (!numDegrees.isNull())                              // 判断滚轮是否转动
            {
                step = numDegrees.y();                             // 将滚轮转动数值传给中间参数step
            }
            mouseEvent->accept();                                       // 获取事件
            if(step>0) {
                if(wat == ui->label)scale_win1 *= 1.1;
                if(wat == ui->label_2)scale_win2 *= 1.1;
            }
            else {
                if(wat == ui->label)scale_win1 *= 1/1.099;
                if(wat == ui->label_2)scale_win2 *= 1/1.099;
            }
            wat->update();
            wat->clear();
        }
        // 鼠标拖拽事件
        if(e->type() == QEvent::MouseMove)
        {
            imgOpened = false;
            QMouseEvent *mouseEvent=(QMouseEvent *)e;
            // 获取label控件实时坐标
            int x = mouseEvent->x();
            int y = mouseEvent->y();

            QString str="("+QString::number(mouseEvent->x())+","+QString::number(mouseEvent->y())+")";
            if(mouseEvent->buttons()&Qt::LeftButton)
            {
            ui->lineEdit->setText(tr("鼠标左键按下并移动")+str);
            }

            if(wat == ui->label){
                mouse_win1.setX(x);
                mouse_win1.setY(y);
            }
            if(wat == ui->label_2){
                mouse_win2.setX(x);
                mouse_win2.setY(y);
            }
            wat->update();
            wat->clear();
         }
        // 绘图事件
        if(e->type() == QEvent::Paint && !imgOpened){
            paint(wat);  // 响应函数
        }
    }
    return QMainWindow::eventFilter(watched, e); //将事件传递给父类
}
//绘图事件实现
void MainWindow::paint(QLabel* imgLabel)
{

    QPainter i(imgLabel);
    if(imgLabel==ui->label){
        Mat img = *imgContainer.getOrigin();
        const QPixmap p = QPixmap::fromImage(cvMat2QImage(img));
        int w = img.cols*scale_win1;
        int h = img.rows*scale_win1;
        int offset_x = mouse_win1.x() - w/2;
        int offset_y = mouse_win1.y() - h/2;
        i.drawPixmap(offset_x, offset_y,w,h, p);
    }
    if(imgLabel==ui->label_2){
        Mat img = imgContainer.top(0);
        const QPixmap p = QPixmap::fromImage(cvMat2QImage(img));
        int w = img.cols* scale_win2;
        int h = img.rows* scale_win2;
        int offset_x = mouse_win2.x() - w/2;
        int offset_y = mouse_win2.y() - h/2;
        i.drawPixmap(offset_x, offset_y,w,h, p);
    }
}
