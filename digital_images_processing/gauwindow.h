#ifndef GAUWINDOW_H
#define GAUWINDOW_H

#include <QWidget>
#include <QDebug>
#include "childwindow.h"
#include "cv_dll.h"
#include "cv_dll_global.h"

namespace Ui {
class gauwindow;
}

class gauwindow :public childWindow
{
    Q_OBJECT

public:
    explicit gauwindow(childWindow *parent = nullptr);
    ~gauwindow();

    void showImg(Mat img);
    void imgBlur(int param, int ksize, double sigmaColor=0);




private:
    Ui::gauwindow *ui;
    ImgBlur blur;


private slots:
    void showValue(int);
    void showValueDouble(int);
    void gauBlur();
    void meanBlur();
    void midBlur();
    void bilBlur();
};



#endif // GAUWINDOW_H
