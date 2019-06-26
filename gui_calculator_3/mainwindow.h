#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_button5_clicked();

    void on_buttonPlus_clicked();

    void on_AC_clicked();

    void on_divide_clicked();

    void on_multiply_clicked();

    void on_minus_clicked();

    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_button0_clicked();

private:
    Ui::MainWindow *ui;
    bool m_action;
};

#endif // MAINWINDOW_H
