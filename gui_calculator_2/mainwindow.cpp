#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QShortcut>

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

//==================================================================================================================================================================

void MainWindow::on_pushButton_11_clicked()
{
    ui->lineEdit->textEdited(+"0");
}


//


//NUMBERS


//


void MainWindow::on_pushButton_10_clicked()
{
    ui->lineEdit->setText(+"3");
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->lineEdit->setText(+"2");
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->lineEdit->setText(+"1");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText(+"6");
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->lineEdit->setText(+"5");
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->lineEdit->setText(+"4");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit->setText(+"9");
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit->setText(+"8");
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit->setText(+"7");
}

//OTHER


void MainWindow::on_pushButton_15_clicked()
{
    ui->lineEdit->setText(+"/");
}

void MainWindow::on_pushButton_16_clicked()
{
    ui->lineEdit->setText(+"*");
}

void MainWindow::on_pushButton_17_clicked()
{
    ui->lineEdit->setText(+"-");
}

void MainWindow::on_pushButton_14_clicked()
{
    ui->lineEdit->selectAll();
    ui->lineEdit->del();
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_13_clicked()
{
    ui->lineEdit->setText(+"=");
}


void MainWindow::on_pushButton_12_clicked()
{
    ui->lineEdit->setText(+".");
}

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->setText(+"+");
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->lineEdit->backspace();
}

void MainWindow::on_pushButton_19_clicked()
{
    ui->lineEdit->previousInFocusChain();
}

void MainWindow::on_pushButton_20_clicked()
{
    ui->lineEdit->nextInFocusChain();
}

void MainWindow::on_pushButton_21_clicked()
{
    ui->lineEdit->setText(+"(");
}

void MainWindow::on_pushButton_22_clicked()
{
    ui->lineEdit->setText(+")");
}
