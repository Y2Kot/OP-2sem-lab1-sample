#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // Генерация кода для отрисовки UI
    ui->setupUi(this);
    connect(ui->hello_button, &QPushButton::clicked, this, &MainWindow::on_helloButton_clicked);
//  Если сигнал вызывается из того же потока что и принимающий объект,
//  слот вызывается непосредственно, аналогично Qt::DirectConnection, в противном случае сигнал ставится в очередь аналогично Qt::QueuedConnection.
//    AutoConnection - параметр по умолчанию.

//  При вызове сигнал немедленно поступает в слот.
//    DirectConnection,

//  При вызове сигнал помещается в очередь до тех пор, пока цикл событий не доставить его в слот.
//    QueuedConnection,

//  Аналогично QueuedConnection, за исключением того, что текущий поток блокируется до тех пор, пока слот не будет выполнен.
//    BlockingQueuedConnection,

//  Сигнал и слот могут иметь только одну связь
//    UniqueConnection
}

// определение деструктора
MainWindow::~MainWindow()
{
    delete ui;
}

// Сигнал
void MainWindow::on_helloButton_clicked()
{
    ui->textLabel->setText("new text");
}

