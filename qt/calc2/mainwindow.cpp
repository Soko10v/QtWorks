#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QtMath>

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


void MainWindow::on_pushButton_clicked()
{
    qint32 val = ui->inputNumberEdit->text().toInt();
    qint32 base = 2;
    if (ui->octSelButton->isChecked()) base = 8;
    else if(ui->hexSelButton->isChecked()) base = 16;
    ui->answerTab->setText(QString::number(val, base));
}


void MainWindow::on_findX_clicked()
{
    qint32 A= ui->inA->text().toInt();
    qint32 B= ui->inB->text().toInt();
    qint32 C= ui->inC->text().toInt();
    double D=qPow(B,2)-4*A*C;
    double X1=0;
    double X2=0;
    if (D>=0)
        if (D>0){
            X1=(-B-qSqrt(D))/(2*A);
            X2=(-B+qSqrt(D))/(2*A);
            ui->ansX1->setText(QString::number(X1));
            ui->ansX2->setText(QString::number(X2));
            }
            else {
                X1=(-B-qSqrt(D))/(2*A);
                ui->ansX1->setText(QString::number(X1));
                ui->ansX2->setText("нет второго корня");
            }
    else{
        ui->ansX1->setText("нет первого корня");
        ui->ansX2->setText("нет второго корня");
    }

}

