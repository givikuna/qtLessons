#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    ui->lineEdit->setText("Giviko");
}

void Dialog::on_pushButton_2_clicked()
{
    QString str = ui->lineEdit->text();
    ui->pushButton->setText(str);
}

void Dialog::on_checkBox_stateChanged(int arg1)
{
    ui->lineEdit->setText("Ok, then continue!");
}

void Dialog::on_horizontalSlider_actionTriggered(int action)
{
    ui->lineEdit->setText("WTF");
}
