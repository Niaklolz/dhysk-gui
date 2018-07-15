#include "include/mainwindow.h"
#include "ui_mainwindow.h"

#include "cputemperaturemodule.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    CpuTemperatureModule temp(NULL, "toto");
    this->ui->label->setText(QString::number(temp.GetTemperature(), 'f', 8));
}

void MainWindow::InitSignals(){

}
