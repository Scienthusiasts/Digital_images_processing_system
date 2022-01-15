#ifndef CV_DLL_H
#define CV_DLL_H


#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <QDebug>
#include <QImage>
using namespace std;
using namespace cv;


// 声明一个算法基类
template<class T>
class algorithm
{
protected:
    T src; //原图
    T dst; // 处理图
public:
    // 参数
    int ksize = 5;
    double alpha;
    double beta;
    int channel = 0;

    virtual void Intergrate(int param){}; // 集成算法
    virtual T process(T img, int param);  // 处理流程
    virtual void setSRC(T);  // 读取原始图像
    virtual T getDST();      // 返回处理后图像
};
// 初始化待处理图像
template<class T>
void algorithm<T>::setSRC(T src)
{this->src = src;}
// 获取处理后的数据
template<class T>
T algorithm<T>::getDST()
{return dst;}
// 处理
template<class T>
T algorithm<T>::process(T img, int param)
{
    setSRC(img);
    Intergrate(param);
    return getDST();
}




// 图像模糊滤波类
class ImgBlur:public algorithm<Mat>
{
public:
    void Intergrate(int param); // 各种滤波
};


// 图像边缘滤波类
class EdgeFilter:public algorithm<Mat>
{
public:
    void Intergrate(int param); // 各种滤波
};


// 图像美化类
class ImgBeautify:public algorithm<Mat>
{
public:
    Mat myFilter(Mat src, double kernel[][3]);

    void Intergrate(int param); // 各种滤波
};


// 图像直方图处理类
class HistProcess:public algorithm<Mat>
{
public:
    // 这是一个静态方法
    static Mat drawHist(Mat);
    void histoNorm();

    void Intergrate(int param);
};


// 图像对比度调整类
class ContrasAdjust:public algorithm<Mat>
{
public:
    void myContrast(double alpha, double beta);
    void Intergrate(int param);
};


// 图像灰度化
class GrayImg:public algorithm<Mat>
{
public:
    void Intergrate(int param);
};


// Mat转QImage
QImage cvMat2QImage(const Mat& mat);
































template <class T>
class imgManager
{
private:
    stack<T> dealed;
    stack<T> withdrawed;
    T origin;
public:
//    imgManager();
//    ~imgManager();

    bool isEmpty();          // 判断是否尚未打开文件
    void push(T);            // 已处理的图像存入缓存
    void setTemp(T);         // 记录某张图像
    T top(int);              // 获取最近一次图像
    T getTemp();             // 获取临时存储的某张图像
    T back();                // 后退操作
    T forward();             // 前进操作
    T cleanDealed();         // 清空已处理缓存
    void cleanWithdrawed();  // 清空已撤销缓存
};

// 判断是否尚未打开文件
template <class T>
bool imgManager<T>::isEmpty()
{
    return dealed.empty();
}

// 获取最近一次的图像
template <class T>
T imgManager<T>::top(int param)
{
    switch(param){
    case 0:
        // 获取最近一次处理的图像
        return dealed.top();
    case 1:
        // 获取最近一次撤销的图像
        return withdrawed.top();
    case 2:
        return origin;
    }
}

// 已处理图像存入缓存
template <class T>
void imgManager<T>::push(T img)
{
    dealed.push(img);
    cleanWithdrawed();
}
// 记录某张图像
template <class T>
void imgManager<T>::setTemp(T img)
{
    origin = img;
}
// 获取临时存储的某张图像
template <class T>
T imgManager<T>::getTemp()
{
    return origin;
}
// 后退已执行操作(撤销)
template <class T>
T imgManager<T>::back()
{
    if(dealed.size()-1){
        T tempImg = dealed.top();
        dealed.pop();
        withdrawed.push(tempImg);
    }
    return dealed.top();
}
// 前进已撤销操作
template <class T>
T imgManager<T>::forward()
{
    if(withdrawed.size()){
        T tempImg = withdrawed.top();
        withdrawed.pop();
        dealed.push(tempImg);
    }
    return dealed.top();
}
// 清空已处理缓存
template <class T>
T imgManager<T>::cleanDealed()
{
    while(dealed.size()-1){
        T tempImg = dealed.top();
        dealed.pop();
        withdrawed.push(tempImg);
    }
    return dealed.top();
}
// 清空已撤销缓存
template <class T>
void imgManager<T>::cleanWithdrawed()
{
    while(withdrawed.size()){
        withdrawed.pop();
    }
}





#endif // CV_DLL_H
