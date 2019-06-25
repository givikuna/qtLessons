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

    void on_buttonFive_clicked();

    void on_buttonPlus_clicked();

private:
    Ui::MainWindow *ui;
    bool m_action;
};

#endif // MAINWINDOW_H
