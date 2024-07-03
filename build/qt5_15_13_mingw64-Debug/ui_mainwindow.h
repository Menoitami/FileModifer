/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *LoadButton;
    QLabel *label;
    QTextEdit *PathEdit;
    QCheckBox *deleteCheckBox;
    QComboBox *ExtensionBox;
    QComboBox *WriteModeBox;
    QTextEdit *KeyEdit;
    QPushButton *StartButton;
    QCheckBox *timerCheckBox;
    QCheckBox *existCheckBox;
    QLabel *checkLabel;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(384, 361);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        LoadButton = new QPushButton(centralwidget);
        LoadButton->setObjectName(QString::fromUtf8("LoadButton"));
        LoadButton->setGeometry(QRect(10, 290, 171, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 9, 171, 101));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(90, 90, 90);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        PathEdit = new QTextEdit(centralwidget);
        PathEdit->setObjectName(QString::fromUtf8("PathEdit"));
        PathEdit->setGeometry(QRect(10, 150, 171, 31));
        deleteCheckBox = new QCheckBox(centralwidget);
        deleteCheckBox->setObjectName(QString::fromUtf8("deleteCheckBox"));
        deleteCheckBox->setGeometry(QRect(30, 250, 111, 31));
        ExtensionBox = new QComboBox(centralwidget);
        ExtensionBox->addItem(QString());
        ExtensionBox->addItem(QString());
        ExtensionBox->setObjectName(QString::fromUtf8("ExtensionBox"));
        ExtensionBox->setGeometry(QRect(200, 10, 161, 41));
        WriteModeBox = new QComboBox(centralwidget);
        WriteModeBox->addItem(QString());
        WriteModeBox->addItem(QString());
        WriteModeBox->addItem(QString());
        WriteModeBox->setObjectName(QString::fromUtf8("WriteModeBox"));
        WriteModeBox->setGeometry(QRect(200, 70, 161, 41));
        KeyEdit = new QTextEdit(centralwidget);
        KeyEdit->setObjectName(QString::fromUtf8("KeyEdit"));
        KeyEdit->setGeometry(QRect(200, 150, 161, 31));
        StartButton = new QPushButton(centralwidget);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        StartButton->setGeometry(QRect(190, 290, 161, 51));
        timerCheckBox = new QCheckBox(centralwidget);
        timerCheckBox->setObjectName(QString::fromUtf8("timerCheckBox"));
        timerCheckBox->setGeometry(QRect(30, 210, 151, 31));
        existCheckBox = new QCheckBox(centralwidget);
        existCheckBox->setObjectName(QString::fromUtf8("existCheckBox"));
        existCheckBox->setGeometry(QRect(210, 250, 151, 31));
        checkLabel = new QLabel(centralwidget);
        checkLabel->setObjectName(QString::fromUtf8("checkLabel"));
        checkLabel->setGeometry(QRect(210, 220, 141, 31));
        checkLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(90, 90, 90);\n"
"border-color: rgb(0, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 120, 151, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 120, 161, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 384, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        WriteModeBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "FileEncoder", nullptr));
        LoadButton->setText(QCoreApplication::translate("MainWindow", "Press to load file", nullptr));
        label->setText(QString());
        PathEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">C:/delme/file.txt</p></body></html>", nullptr));
        deleteCheckBox->setText(QCoreApplication::translate("MainWindow", "delete input file", nullptr));
        ExtensionBox->setItemText(0, QCoreApplication::translate("MainWindow", "*.txt", nullptr));
        ExtensionBox->setItemText(1, QCoreApplication::translate("MainWindow", "*.bin", nullptr));

        WriteModeBox->setItemText(0, QCoreApplication::translate("MainWindow", "Replace File", nullptr));
        WriteModeBox->setItemText(1, QCoreApplication::translate("MainWindow", "Add \"_new\"", nullptr));
        WriteModeBox->setItemText(2, QCoreApplication::translate("MainWindow", "write the address", nullptr));

        KeyEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">9223372036854775807</p></body></html>", nullptr));
        StartButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        timerCheckBox->setText(QCoreApplication::translate("MainWindow", "every 5 seconds", nullptr));
        existCheckBox->setText(QCoreApplication::translate("MainWindow", "checking file existence", nullptr));
        checkLabel->setText(QCoreApplication::translate("MainWindow", "Checking file existence", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Encode key", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Write address", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
