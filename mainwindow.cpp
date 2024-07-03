#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::EncodeFile(){

    QString writeAddr;
    if (ui->PathEdit->isEnabled()){

         writeAddr =ui->PathEdit->toPlainText();
        if (writeAddr==readAddr){
            ui->label->setText("such file exists");
            return;
        }
    }


    else
        writeAddr= "../TempData/file."+QFileInfo(readAddr).suffix();


    QFile readFile(readAddr);
    QFile writeFile(writeAddr);

    bool opened =1;
    opened &= readFile.open(QIODevice::ReadOnly);
    opened &= writeFile.open(QIODevice::WriteOnly);

    if (opened==0){
        ui->label->setText("unable to open the file");
        return;
    }

    QString text;
    char buffer8[8]={0,0,0,0,0,0,0,0};
    QDataStream readStream(&readFile);
    QDataStream writeStream(&writeFile);
    int64_t bytes8;



    while (!readStream.atEnd()){


        auto size = readStream.readRawData(buffer8, 8);

        std::memcpy(&bytes8, buffer8, sizeof(qint64));

        bytes8^= key;

        std::memcpy(buffer8, &bytes8, sizeof(qint64));

        writeStream.writeRawData(buffer8,size);
    }

    ui->label->setText("file Saved!!!");




    writeFile.close();
    readFile.close();

    if (ui->deleteCheckBox->isChecked()) readFile.remove();
    if (ui->WriteModeBox->currentIndex()==0) {
        readFile.remove();
        writeFile.rename(readAddr);}
    else if (ui->WriteModeBox->currentIndex()==1){

        auto filename= QFileInfo(readAddr).absolutePath()+"/"
                        +QFileInfo(readAddr).completeBaseName()+"_new."+QFileInfo(readAddr).suffix();

        if (QFile(filename).exists()) QFile(filename).remove();
        writeFile.rename(filename);
    }
}



void MainWindow::on_KeyEdit_textChanged()
{
    key = ui->KeyEdit->toPlainText().toLongLong();
    if (key==0) ui->label->setText("Please change the key\n it must be int and !=0");
    else ui->label->clear();
}



void MainWindow::on_WriteModeBox_currentIndexChanged(int index)
{
    if (index ==2) ui->PathEdit->setDisabled(false);
    else  ui->PathEdit->setDisabled(true);
}


void MainWindow::on_LoadButton_clicked()
{

    readAddr = QFileDialog::getOpenFileName(this, "Choose file", "../../", ui->ExtensionBox->currentText());
    ui->label->setText(readAddr);
}


void MainWindow::on_StartButton_clicked()
{
    if (ui->timerCheckBox->isChecked()) {
        QEventLoop loop;
        while (ui->timerCheckBox->isChecked()) {
            EncodeFile();
            QTimer::singleShot(5000, &loop, &QEventLoop::quit);
            loop.exec();
        }
    }
    else EncodeFile();

}



void MainWindow::on_existCheckBox_clicked()
{
    if (ui->existCheckBox->isChecked()) {
        QEventLoop loop;
        while (ui->existCheckBox->isChecked()) {
            bool existence = QFile(readAddr).exists();
            if (existence) ui->checkLabel->setText("File exists");
            else ui->checkLabel->setText("File doesn't exists");
            QTimer::singleShot(1000, &loop, &QEventLoop::quit);
            loop.exec();
        }
    }
}

