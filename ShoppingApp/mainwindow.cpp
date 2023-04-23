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

int chocoCount=0;
int biscuitCount=0;
int chipsCount=0;
int kurkureCount=0;
int total=0;

void MainWindow::on_pushButton_clicked()
{

    chocoCount++;
    ui->chocoLabel->setText(QString::number(chocoCount));
    total=chocoCount*10+biscuitCount*20;
    ui->label_10->setText(QString::number(total));
}


void MainWindow::on_pushButton_5_clicked()
{
    if(chocoCount>0){
        chocoCount--;
        ui->chocoLabel->setText(QString::number(chocoCount));
        total=chocoCount*10+biscuitCount*20;
        ui->label_10->setText(QString::number(total));
    }

}


void MainWindow::on_pushButton_2_clicked()
{
    biscuitCount++;
    ui->biscuitLabel->setText(QString::number(biscuitCount));
    total=chocoCount*10+biscuitCount*20;
    ui->label_10->setText(QString::number(total));
}


void MainWindow::on_pushButton_6_clicked()
{
    if(biscuitCount>0){
        biscuitCount--;
        ui->biscuitLabel->setText(QString::number(biscuitCount));
        total=chocoCount*10+biscuitCount*20;
        ui->label_10->setText(QString::number(total));
    }


}

