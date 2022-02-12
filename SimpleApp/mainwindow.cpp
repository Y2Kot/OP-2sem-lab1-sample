#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // Генерация кода для отрисовки UI
    ui->setupUi(this);
    // Сигнал - некоторое событие (например, нажатие на кнопку)
    // Слот - функция-обработчик событий
    connect(ui->hello_button, &QPushButton::clicked, this, &MainWindow::on_helloButton_clicked);
}

// определение деструктора
MainWindow::~MainWindow()
{
    delete ui;
}

// Слот
void MainWindow::on_helloButton_clicked()
{
    ui->textLabel->setText("new text");
}

