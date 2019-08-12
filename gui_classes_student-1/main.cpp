#include "mainwindow.h"
#include <QApplication>
#include "Student.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Student givi();
    {
    Student leo("Levani", "Getsadze");
    int o = 90;
    }
    int k = 9;
    return a.exec();
}
