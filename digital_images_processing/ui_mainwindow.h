/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action;
    QAction *actionSobel_X;
    QAction *actionSobel_Y;
    QAction *actionMean;
    QAction *actionWeight_Mean;
    QAction *actionr_channel;
    QAction *actiong_channel;
    QAction *actionb_channel;
    QAction *action_2;
    QAction *action_8;
    QAction *action_9;
    QAction *action_10;
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_8;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_12;
    QLabel *label_7;
    QPushButton *pushButton_11;
    QPushButton *pushButton_13;
    QMenuBar *menubar;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menu;
    QMenu *menu_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1708, 729);
        MainWindow->setMinimumSize(QSize(1708, 729));
        MainWindow->setMaximumSize(QSize(1708, 729));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255\357\274\214255\357\274\214255);\n"
"border-radius: 10px;"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        actionSobel_X = new QAction(MainWindow);
        actionSobel_X->setObjectName(QString::fromUtf8("actionSobel_X"));
        actionSobel_Y = new QAction(MainWindow);
        actionSobel_Y->setObjectName(QString::fromUtf8("actionSobel_Y"));
        actionMean = new QAction(MainWindow);
        actionMean->setObjectName(QString::fromUtf8("actionMean"));
        actionWeight_Mean = new QAction(MainWindow);
        actionWeight_Mean->setObjectName(QString::fromUtf8("actionWeight_Mean"));
        actionr_channel = new QAction(MainWindow);
        actionr_channel->setObjectName(QString::fromUtf8("actionr_channel"));
        actiong_channel = new QAction(MainWindow);
        actiong_channel->setObjectName(QString::fromUtf8("actiong_channel"));
        actionb_channel = new QAction(MainWindow);
        actionb_channel->setObjectName(QString::fromUtf8("actionb_channel"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QString::fromUtf8("action_8"));
        action_9 = new QAction(MainWindow);
        action_9->setObjectName(QString::fromUtf8("action_9"));
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QString::fromUtf8("action_10"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 120, 721, 541));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"border-radius: 10px;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 91, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 104);\n"
"border-radius:20px;"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 10, 401, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(950, 120, 721, 541));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"border-radius: 10px;"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(20, 570, 71, 41));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 104);\n"
"border-radius:20px;"));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(20, 620, 151, 41));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 104);\n"
"border-radius:20px;"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(1610, 10, 61, 41));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 104);\n"
"border-radius:20px;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 170, 171, 131));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"border-radius: 10px;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 390, 171, 131));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"border-radius: 10px;"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 130, 101, 31));
        label_5->setStyleSheet(QString::fromUtf8(""));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 350, 101, 31));
        label_6->setStyleSheet(QString::fromUtf8(""));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(100, 570, 71, 41));
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 104);\n"
"border-radius:20px;"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(560, 0, 751, 101));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(1540, 10, 61, 41));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 104);\n"
"border-radius:20px;"));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(1540, 60, 131, 41));
        pushButton_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 104);\n"
"border-radius:20px;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1708, 21));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_6 = new QMenu(menubar);
        menu_6->setObjectName(QString::fromUtf8("menu_6"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menubar->addAction(menu_5->menuAction());
        menubar->addAction(menu_6->menuAction());
        menu_2->addAction(action_3);
        menu_2->addAction(actionSobel_X);
        menu_2->addAction(actionSobel_Y);
        menu_3->addAction(action_4);
        menu_4->addAction(action_5);
        menu_4->addAction(action_10);
        menu_5->addAction(action_6);
        menu_5->addAction(action_7);
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_8);
        menu->addAction(action_9);
        menu_6->addAction(actionMean);
        menu_6->addAction(actionWeight_Mean);
        menu_6->addAction(actionr_channel);
        menu_6->addAction(actiong_channel);
        menu_6->addAction(actionb_channel);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action_3->setText(QApplication::translate("MainWindow", "\346\213\211\346\231\256\346\213\211\346\226\257\346\273\244\346\263\242", nullptr));
        action_4->setText(QApplication::translate("MainWindow", "\345\257\271\346\257\224\345\272\246\345\244\204\347\220\206", nullptr));
        action_5->setText(QApplication::translate("MainWindow", "\347\233\264\346\226\271\345\233\276\345\235\207\350\241\241\345\214\226", nullptr));
        action_6->setText(QApplication::translate("MainWindow", "\345\233\276\345\203\217\351\224\220\345\214\226", nullptr));
        action_7->setText(QApplication::translate("MainWindow", "\346\265\256\351\233\225\346\225\210\346\236\234", nullptr));
        action->setText(QApplication::translate("MainWindow", "\351\253\230\346\226\257\346\250\241\347\263\212", nullptr));
        actionSobel_X->setText(QApplication::translate("MainWindow", "Sobel X", nullptr));
        actionSobel_Y->setText(QApplication::translate("MainWindow", "Sobel Y", nullptr));
        actionMean->setText(QApplication::translate("MainWindow", "Mean", nullptr));
        actionWeight_Mean->setText(QApplication::translate("MainWindow", "Weight Mean", nullptr));
        actionr_channel->setText(QApplication::translate("MainWindow", "r channel", nullptr));
        actiong_channel->setText(QApplication::translate("MainWindow", "g channel", nullptr));
        actionb_channel->setText(QApplication::translate("MainWindow", "b channel", nullptr));
        action_2->setText(QApplication::translate("MainWindow", "\345\235\207\345\200\274\346\273\244\346\263\242", nullptr));
        action_8->setText(QApplication::translate("MainWindow", "\344\270\255\345\200\274\346\273\244\346\263\242", nullptr));
        action_9->setText(QApplication::translate("MainWindow", "\345\217\214\350\276\271\346\273\244\346\263\242", nullptr));
        action_10->setText(QApplication::translate("MainWindow", "\347\201\260\345\272\246\344\270\226\347\225\214", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        label_2->setText(QString());
        pushButton_9->setText(QApplication::translate("MainWindow", "\345\220\216\351\200\200", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "\344\270\200\351\224\256\346\270\205\351\231\244", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "\345\216\237\345\233\276\347\233\264\346\226\271\345\233\276\357\274\232", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\347\233\256\346\240\207\347\233\264\346\226\271\345\233\276\357\274\232", nullptr));
        pushButton_12->setText(QApplication::translate("MainWindow", "\345\211\215\350\277\233", nullptr));
        label_7->setText(QString());
        pushButton_11->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        pushButton_13->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\345\271\266\351\200\200\345\207\272", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\350\276\271\347\274\230\346\217\220\345\217\226", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "\345\257\271\346\257\224\345\272\246", nullptr));
        menu_4->setTitle(QApplication::translate("MainWindow", "\347\231\275\345\271\263\350\241\241", nullptr));
        menu_5->setTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217\347\276\216\345\214\226", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217\346\250\241\347\263\212", nullptr));
        menu_6->setTitle(QApplication::translate("MainWindow", "\347\201\260\345\272\246\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
