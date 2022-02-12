#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // Волшебный метод генерирующий код
    ui->setupUi(this);
    // Функция связи сигналов (кнопок интерфейса) и слотов - функий обратного вызова (callback)
    // Одному сигналу может соответствовать несколько слотов
    connect(ui->incrementButton, &QPushButton::clicked, this, &MainWindow::onIncrementClicked);
    connect(ui->decrementButton, &QPushButton::clicked, this, &MainWindow::onDecrementClicked);
    connect(ui->updateButton, &QPushButton::clicked, this, &MainWindow::onUpdateValueClicked);
    doOperation(Initialization, context, NULL);
    updateLabels();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onIncrementClicked() {
    doOperation(Increment, context, NULL);
    updateLabels();
}
void MainWindow::onDecrementClicked() {
    doOperation(Decrement, context, NULL);
    updateLabels();
}
void MainWindow::onUpdateValueClicked() {
    AppParams* param = (AppParams*) malloc(sizeof(AppParams));
    param->newValue = ui->valueEdit->text().toInt();
    doOperation(Update, context, param);
    updateLabels();
    free(param);
}

void MainWindow::updateLabels() {
    ui->clickCount->setText(QString::number(context->clickCount));
    ui->currentValue->setText(QString::number(context->currentValue));
}



