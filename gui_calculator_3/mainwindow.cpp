#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qapplication.h>
#include <qpushbutton.h>
#include <qfont.h>
#include <QLabel>
#include <QApplication>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    m_action = false;

}
MainWindow::~MainWindow()
{

    delete ui;

}


//QString str = ui->lineEdit->text();
//ui->lineEdit->setText(QString::number(m_Answer));

void MainWindow::on_buttonPlus_clicked()
{
    m_action = true;
}

void MainWindow::on_AC_clicked()
{
    ui->lineEdit->selectAll();
    ui->lineEdit->del();
}

void MainWindow::on_divide_clicked()
{
        m_action = true;
}

void MainWindow::on_multiply_clicked()
{
        m_action = true;
}

void MainWindow::on_minus_clicked()
{
        m_action = true;
}

void MainWindow::on_button1_clicked()
{
    if(m_action == true) {
        ui->lineEdit->setText("1");
        m_action = false;
    }
    else {
        QString str = ui->lineEdit->text();
        ui->lineEdit->setText(str+"1");
    }
}

void MainWindow::on_button2_clicked()
{
    if(m_action == true) {
        ui->lineEdit->setText("2");
        m_action = false;
    }
    else {
        QString str = ui->lineEdit->text();
        ui->lineEdit->setText(str+"2");
    }
}

void MainWindow::on_button3_clicked()
{
    if(m_action == true) {
        ui->lineEdit->setText("3");
        m_action = false;
    }
    else {
        QString str = ui->lineEdit->text();
        ui->lineEdit->setText(str+"3");
    }
}

void MainWindow::on_button4_clicked()
{
    if(m_action == true) {
        ui->lineEdit->setText("4");
        m_action = false;
    }
    else {
        QString str = ui->lineEdit->text();
        ui->lineEdit->setText(str+"4");
    }
}

void MainWindow::on_button5_clicked()
{

    if(m_action == true) {
        ui->lineEdit->setText("5");
        m_action = false;
    }
    else {
        QString str = ui->lineEdit->text();
        ui->lineEdit->setText(str+"5");
    }


}

void MainWindow::on_button6_clicked()
{
    if(m_action == true) {
        ui->lineEdit->setText("6");
        m_action = false;
    }
    else {
        QString str = ui->lineEdit->text();
        ui->lineEdit->setText(str+"6");
    }
}

void MainWindow::on_button7_clicked()
{
    if(m_action == true) {
        ui->lineEdit->setText("7");
        m_action = false;
    }
    else {
        QString str = ui->lineEdit->text();
        ui->lineEdit->setText(str+"7");
    }
}

void MainWindow::on_button8_clicked()
{
    if(m_action == true) {
        ui->lineEdit->setText("8");
        m_action = false;
    }
    else {
        QString str = ui->lineEdit->text();
        ui->lineEdit->setText(str+"8");
    }
}

void MainWindow::on_button9_clicked()
{
    if(m_action == true) {
        ui->lineEdit->setText("9");
        m_action = false;
    }
    else {
        QString str = ui->lineEdit->text();
        ui->lineEdit->setText(str+"9");
    }
}

void MainWindow::on_button0_clicked()
{
    if(m_action == true) {
        ui->lineEdit->setText("0");
        m_action = false;
    }
    else {
        QString str = ui->lineEdit->text();
        ui->lineEdit->setText(str+"0");
    }
}
