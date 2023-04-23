/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *biscuitLabel;
    QLabel *chocoLabel;
    QLabel *kurkureLabel;
    QLabel *chipsLabel;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(557, 651);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 70, 91, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setLineWidth(1);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 150, 58, 16));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 220, 101, 41));
        label_4->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 300, 101, 41));
        label_5->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(280, 80, 58, 16));
        QFont font1;
        font1.setPointSize(17);
        label_2->setFont(font1);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(280, 150, 58, 16));
        label_6->setFont(font1);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(280, 230, 58, 16));
        label_7->setFont(font1);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(280, 310, 58, 16));
        label_8->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(380, 70, 31, 32));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(380, 140, 31, 32));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(380, 220, 31, 32));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(380, 300, 31, 32));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(440, 70, 31, 32));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(440, 140, 31, 32));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(440, 220, 31, 32));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(440, 300, 31, 32));
        biscuitLabel = new QLabel(centralwidget);
        biscuitLabel->setObjectName("biscuitLabel");
        biscuitLabel->setGeometry(QRect(420, 150, 16, 16));
        chocoLabel = new QLabel(centralwidget);
        chocoLabel->setObjectName("chocoLabel");
        chocoLabel->setGeometry(QRect(420, 80, 16, 16));
        kurkureLabel = new QLabel(centralwidget);
        kurkureLabel->setObjectName("kurkureLabel");
        kurkureLabel->setGeometry(QRect(420, 230, 16, 16));
        chipsLabel = new QLabel(centralwidget);
        chipsLabel->setObjectName("chipsLabel");
        chipsLabel->setGeometry(QRect(420, 310, 16, 16));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(70, 410, 101, 51));
        QFont font2;
        font2.setPointSize(25);
        label_9->setFont(font2);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(280, 430, 81, 21));
        label_10->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Chocolate", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Biscuit", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Kurkure", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Chips", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "40", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        biscuitLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        chocoLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        kurkureLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        chipsLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Total", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
