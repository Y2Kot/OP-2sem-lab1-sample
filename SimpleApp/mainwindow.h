#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow // наследуется от QWidget. Разрешает использовать механизм сигналов и слотов (событийная модель в Qt)
{
    Q_OBJECT // Макрос добавляющий мета-данные для компилятора

public:
    MainWindow(QWidget *parent = nullptr); // Конструктор, может содержать указатель на родителя
    ~MainWindow(); // Деструктор

private:
    Ui::MainWindow *ui; // Доступ к состоянию интерфейса через указатель
    void on_helloButton_clicked();
};
#endif // MAINWINDOW_H
