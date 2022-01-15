/********************************************************************************
** Form generated from reading UI file 'childwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILDWINDOW_H
#define UI_CHILDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_childWindow
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QWidget *childWindow)
    {
        if (childWindow->objectName().isEmpty())
            childWindow->setObjectName(QString::fromUtf8("childWindow"));
        childWindow->resize(519, 492);
        pushButton = new QPushButton(childWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 240, 81, 31));
        pushButton_2 = new QPushButton(childWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 240, 81, 31));
        label = new QLabel(childWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 270, 41, 41));

        retranslateUi(childWindow);

        QMetaObject::connectSlotsByName(childWindow);
    } // setupUi

    void retranslateUi(QWidget *childWindow)
    {
        childWindow->setWindowTitle(QApplication::translate("childWindow", "Form", nullptr));
        pushButton->setText(QApplication::translate("childWindow", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QApplication::translate("childWindow", "\345\217\226\346\266\210", nullptr));
        label->setText(QApplication::translate("childWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class childWindow: public Ui_childWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILDWINDOW_H
