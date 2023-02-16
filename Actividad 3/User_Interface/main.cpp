#include "mainwindow.h"

#include <QApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    MainWindow w;
    w.show();

    //qDebug() << "Adios mundo";

    return a.exec();
}
