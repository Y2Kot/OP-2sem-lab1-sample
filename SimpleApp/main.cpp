#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // инициализация qt app
    MainWindow w;
    w.show(); // Блокирующий вызов. Отображения основного окна приложения

    return a.exec();
}
