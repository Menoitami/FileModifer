#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <cstring>
#include <QMainWindow>
#include <QFileDialog>
#include <QFile>
#include <QIODevice>
#include <QDataStream>
#include <QDebug>
#include <QThread>
#include <QFuture>
#include <QtConcurrent/QtConcurrentRun>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_KeyEdit_textChanged();

    void on_LoadButton_clicked();

    void on_WriteModeBox_currentIndexChanged(int index);

    void on_StartButton_clicked();

    void on_existCheckBox_clicked();

private:
    Ui::MainWindow *ui;
    void EncodeFile();
    qint64 key=  9223372036854775807;
    QString readAddr;

};
#endif // MAINWINDOW_H
