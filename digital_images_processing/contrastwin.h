#ifndef CONTRASTWIN_H
#define CONTRASTWIN_H

#include <QWidget>
#include <QDebug>
#include "childwindow.h"
#include "cv_dll.h"
#include "cv_dll_global.h"

namespace Ui {
class contrastWin;
}

class contrastWin : public childWindow
{
    Q_OBJECT

public:
    explicit contrastWin(childWindow *parent = nullptr);
    void showImg(Mat img);
    ~contrastWin();



private:
    Ui::contrastWin *ui;

    ContrasAdjust ca;

private slots:
    void contrast(int param, double alpha, double beta);
    void contrast_alpha(int);
    void contrast_beta(int);
};
#endif // CONTRASTWIN_H
