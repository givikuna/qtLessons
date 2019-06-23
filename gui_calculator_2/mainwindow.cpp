#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QShortcut>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_vakho = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

//==================================================================================================================================================================


//


//NUMBERS


//



void MainWindow::on_pushButton_10_clicked()
{
    QString str = ui->lineEdit->text();

    if(m_vakho == 1) {
        str = "";
        m_vakho = 0;
    }

    ui->lineEdit->setText(str+"3");
}

void MainWindow::on_pushButton_9_clicked()
{
    QString str = ui->lineEdit->text();

    if(m_vakho == 1) {
        str = "";
        m_vakho = 0;
    }

    ui->lineEdit->setText(str+"2");
}

void MainWindow::on_pushButton_8_clicked()
{
    QString str = ui->lineEdit->text();

    if(m_vakho == 1) {
        str = "";
        m_vakho = 0;
    }

    ui->lineEdit->setText(str+"1");
}

void MainWindow::on_pushButton_2_clicked()
{
    QString str = ui->lineEdit->text();

    if(m_vakho == 1) {
        str = "";
        m_vakho = 0;
    }

    ui->lineEdit->setText(str+"6");
}

void MainWindow::on_pushButton_4_clicked()
{
    QString str = ui->lineEdit->text();

    if(m_vakho == 1) {
        str = "";
        m_vakho = 0;
    }

    ui->lineEdit->setText(str+"5");
}

void MainWindow::on_pushButton_7_clicked()
{
    QString str = ui->lineEdit->text();

    if(m_vakho == 1) {
        str = "";
        m_vakho = 0;
    }

    ui->lineEdit->setText(str+"4");
}

void MainWindow::on_pushButton_3_clicked()
{
    QString str = ui->lineEdit->text();

    if(m_vakho == 1) {
        str = "";
        m_vakho = 0;
    }

    ui->lineEdit->setText(str+"9");
}

void MainWindow::on_pushButton_5_clicked()
{
    QString str = ui->lineEdit->text();

    if(m_vakho == 1) {
        str = "";
        m_vakho = 0;
    }

    ui->lineEdit->setText(str+"8");
}

void MainWindow::on_pushButton_6_clicked()
{
    QString str = ui->lineEdit->text();

    if(m_vakho == 1) {
        str = "";
        m_vakho = 0;
    }

    ui->lineEdit->setText(str + "7");
}

//OTHER


void MainWindow::on_pushButton_15_clicked()
{
    QString str = ui->lineEdit->text();

    ui->lineEdit->setText(str+"/");
}

void MainWindow::on_pushButton_16_clicked()
{
    QString str = ui->lineEdit->text();

    ui->lineEdit->setText(str+"*");
}

void MainWindow::on_pushButton_17_clicked()
{
    QString str = ui->lineEdit->text();

    ui->lineEdit->setText(str+"-");
}

void MainWindow::on_pushButton_14_clicked()
{
    ui->lineEdit->selectAll();
    ui->lineEdit->del();
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_13_clicked()
{
    QString str = ui->lineEdit->text();

    int nValue = str.toInt();
    // any action to calculate
    QString sResult = QString::number(nValue);

    ui->lineEdit->setText(sResult + "givikp");
}


void MainWindow::on_pushButton_12_clicked()
{
    QString str = ui->lineEdit->text();

    ui->lineEdit->setText(str+".");
}

void MainWindow::on_pushButton_clicked()
{
    QString str = ui->lineEdit->text();

    ui->lineEdit->setText(str+"+");
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->lineEdit->backspace();
}

void MainWindow::on_pushButton_21_clicked()
{
    QString str = ui->lineEdit->text();

    ui->lineEdit->setText(str+"(");
}

void MainWindow::on_pushButton_22_clicked()
{
    QString str = ui->lineEdit->text();

    ui->lineEdit->setText(str+")");
}

void MainWindow::on_pushButton_11_clicked()
{
    QString str = ui->lineEdit->text();

    ui->lineEdit->setText(str+"0");
}
