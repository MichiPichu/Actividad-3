#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Neuronas");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    close();
}


void MainWindow::on_btnCapturar_clicked()
{
    QString id = ui->txtID->text();
    QString voltaje = ui->txtVoltaje->text();
    QString posicion_x = ui->txtPx->text();
    QString posicion_y = ui->txtPy->text();
    QString red = ui->txtRed->text();
    QString green = ui->txtGreen->text();
    QString blue = ui->txtBlue->text();
    QString neurona = QString("ID: %1, Voltaje: %2, Posicion X: %3, Posicion Y: %4, Red: %5, Green: %6, Blue: %7").arg(id).arg(voltaje).arg(posicion_x).arg(posicion_y).arg(red).arg(green).arg(blue);
    ui->listWidget->addItem(neurona);

    ui->txtID->clear();
    ui->txtVoltaje->clear();
    ui->txtPx->clear();
    ui->txtPy->clear();
    ui->txtRed->clear();
    ui->txtGreen->clear();
    ui->txtBlue->clear();
    QMessageBox::information(this, "Mensaje", "Neurona Capturada :)");
}

