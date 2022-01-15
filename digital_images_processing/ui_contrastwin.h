/********************************************************************************
** Form generated from reading UI file 'contrastwin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTRASTWIN_H
#define UI_CONTRASTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_contrastWin
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *contrastWin)
    {
        if (contrastWin->objectName().isEmpty())
            contrastWin->setObjectName(QString::fromUtf8("contrastWin"));
        contrastWin->resize(705, 754);
        contrastWin->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(contrastWin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 91, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 104);\n"
"border-radius:20px;"));
        pushButton_2 = new QPushButton(contrastWin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 10, 91, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 104);\n"
"border-radius:20px;"));
        label = new QLabel(contrastWin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 70, 591, 521));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"border-radius: 10px;"));
        horizontalSlider = new QSlider(contrastWin);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(50, 650, 611, 20));
        horizontalSlider->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(contrastWin);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(50, 720, 611, 20));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        lineEdit = new QLineEdit(contrastWin);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(340, 620, 81, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);"));
        label_2 = new QLabel(contrastWin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 620, 41, 16));
        label_3 = new QLabel(contrastWin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 690, 41, 16));
        lineEdit_2 = new QLineEdit(contrastWin);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(340, 690, 81, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(194, 194, 194);"));

        retranslateUi(contrastWin);

        QMetaObject::connectSlotsByName(contrastWin);
    } // setupUi

    void retranslateUi(QWidget *contrastWin)
    {
        contrastWin->setWindowTitle(QApplication::translate("contrastWin", "Form", nullptr));
        pushButton->setText(QApplication::translate("contrastWin", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QApplication::translate("contrastWin", "\345\217\226\346\266\210", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("contrastWin", "alpha\357\274\232", nullptr));
        label_3->setText(QApplication::translate("contrastWin", "beta\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class contrastWin: public Ui_contrastWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTRASTWIN_H
