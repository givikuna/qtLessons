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

void MainWindow::on_buttonFive_clicked()
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
void MainWindow::on_buttonPlus_clicked()
{
    m_action = true;
}
