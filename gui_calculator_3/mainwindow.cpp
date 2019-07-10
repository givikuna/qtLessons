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
    m_mathAction = -1;

}
MainWindow::~MainWindow()
{

    delete ui;

}

// QString str = ui->lineEdit->text(); // QLineEdit to QString
// int n = str.toInt(); // QString to int
// QString ss = QString::number(n); // int to QString
// ui->lineEdit->setText(ss); // QString to QLineEdit

void MainWindow::on_buttonPlus_clicked()
{
    m_action = true;
    QString str = ui->lineEdit->text();
    m_first = str.toInt();
    m_mathAction = 0;
    double atwo = (double) m_first;
}

void MainWindow::on_AC_clicked()
{
    ui->lineEdit->selectAll();
    ui->lineEdit->del();
}

void MainWindow::on_divide_clicked()
{
    m_action = true;
    QString str = ui->lineEdit->text();
    m_first = str.toInt();
    m_mathAction = 1;
    double atwo = (double) m_first;
}

void MainWindow::on_multiply_clicked()
{
    m_action = true;
    QString str = ui->lineEdit->text();
    m_first = str.toInt();
    m_mathAction = 2;
    double atwo = (double) m_first;
}

void MainWindow::on_minus_clicked()
{
    m_action = true;
    QString str = ui->lineEdit->text();
    m_first = str.toInt();
    m_mathAction = 3;
    double atwo = (double) m_first;
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

void MainWindow::on_ENT_clicked()
{
    QString str = ui->lineEdit->text();
    double second = str.toDouble();
    double result =0;
    if (0 == m_mathAction) {
        result = m_first + second;
    }
    else if (1 == m_mathAction) {
        result = m_first / second;
    }
    else if (2 == m_mathAction) {
        result = m_first * second;
    }
    else if (3 == m_mathAction) {
        result = m_first - second;
    }
    QString strResult = QString::number(result, 'g', 6);
    ui->lineEdit->setText(strResult);
    m_action = true;
}

void MainWindow::on_ButtonPoint_clicked()
{
        QString str = ui->lineEdit->text();
        ui->lineEdit->setText(str+".");
        double a = 0.0;
}
