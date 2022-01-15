/********************************************************************************
** Form generated from reading UI file 'gauwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAUWINDOW_H
#define UI_GAUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gauwindow
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QSlider *horizontalSlider;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSlider *horizontalSlider_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *gauwindow)
    {
        if (gauwindow->objectName().isEmpty())
            gauwindow->setObjectName(QString::fromUtf8("gauwindow"));
        gauwindow->resize(646, 683);
        gauwindow->setMaximumSize(QSize(646, 16777215));
        gauwindow->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(gauwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 60, 531, 421));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"border-radius: 10px;border-radius: 10px;"));
        pushButton = new QPushButton(gauwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 91, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 104);\n"
"border-radius:20px;"));
        horizontalSlider = new QSlider(gauwindow);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(50, 590, 551, 20));
        horizontalSlider->setOrientation(Qt::Horizontal);
        lineEdit = new QLineEdit(gauwindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(330, 560, 51, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);"));
        label_2 = new QLabel(gauwindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 560, 91, 21));
        label_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_2 = new QPushButton(gauwindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 10, 91, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 104);\n"
"border-radius:20px;"));
        pushButton_3 = new QPushButton(gauwindow);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 500, 101, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 104);\n"
"border-radius:20px;"));
        pushButton_4 = new QPushButton(gauwindow);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(190, 500, 101, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 104);\n"
"border-radius:20px;"));
        pushButton_5 = new QPushButton(gauwindow);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(340, 500, 101, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 104);\n"
"border-radius:20px;"));
        pushButton_6 = new QPushButton(gauwindow);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(490, 500, 101, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 104);\n"
"border-radius:20px;"));
        horizontalSlider_2 = new QSlider(gauwindow);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(50, 650, 551, 20));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(gauwindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 620, 111, 21));
        label_3->setStyleSheet(QString::fromUtf8(""));
        lineEdit_2 = new QLineEdit(gauwindow);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(330, 620, 51, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);"));

        retranslateUi(gauwindow);

        QMetaObject::connectSlotsByName(gauwindow);
    } // setupUi

    void retranslateUi(QWidget *gauwindow)
    {
        gauwindow->setWindowTitle(QApplication::translate("gauwindow", "Form", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("gauwindow", "\344\277\235\345\255\230", nullptr));
        label_2->setText(QApplication::translate("gauwindow", "\346\273\244\346\263\242\346\240\270\345\244\247\345\260\217:", nullptr));
        pushButton_2->setText(QApplication::translate("gauwindow", "\345\217\226\346\266\210", nullptr));
        pushButton_3->setText(QApplication::translate("gauwindow", "\351\253\230\346\226\257\346\273\244\346\263\242", nullptr));
        pushButton_4->setText(QApplication::translate("gauwindow", "\345\235\207\345\200\274\346\273\244\346\263\242", nullptr));
        pushButton_5->setText(QApplication::translate("gauwindow", "\344\270\255\345\200\274\346\273\244\346\263\242", nullptr));
        pushButton_6->setText(QApplication::translate("gauwindow", "\345\217\214\350\276\271\346\273\244\346\263\242", nullptr));
        label_3->setText(QApplication::translate("gauwindow", "\345\217\214\350\276\271\346\273\244\346\263\242sigmaColor:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gauwindow: public Ui_gauwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAUWINDOW_H
