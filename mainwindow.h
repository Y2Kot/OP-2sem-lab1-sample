#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow // наследуется от QWidget. Разрешает использовать механизм сигналов и слотов (событийная модель в Qt)
{
// Сигнал - аналог событий
// Слот - обработчик событий
// Событийная система поддержвают полиморфизм
// (слоты можно делать виртуальными и переопределять, но это считается плохой практикой т.к. сильно замедляет работу)
    Q_OBJECT // Макрос добавляющий мета объектные данные для компилятора

public:
// Конструктор, передаётся родитель для дочерних элементов, удобно для очистки. Удобно для передачи событий
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow(); // Объявление деструктора

private:
    Ui::MainWindow *ui; // Доступ к состоянию интерфейса через указатель
    void on_helloButton_clicked();
};
#endif // MAINWINDOW_H
