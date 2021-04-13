#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // инициализация qt app
    MainWindow w; // Вызов онструктора, создаётся на стеке, деструктор вызовется.
    w.show(); // Блокирующий вызов

// Аналогично, но хранится в куче, деструктор не вызовется, возможна утечка памяти
//    MainWindow *w1 = new MainWindow();
//    w1->show();
//    delete w1; // стаааарый метод
    return a.exec();
}
