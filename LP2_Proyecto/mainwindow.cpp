#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "configuracionwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btnJugar, &QPushButton::clicked, this, &MainWindow::onJugarClicked);
    connect(ui->btnConfiguracion, &QPushButton::clicked, this, &MainWindow::onConfiguracionClicked);
    connect(ui->btnSalir, &QPushButton::clicked, this, &MainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onJugarClicked() {
    QMessageBox::information(this, "Jugar", "Aquí irá la lógica del juego.");
}

void MainWindow::onConfiguracionClicked() {
    ConfiguracionWindow *configWin = new ConfiguracionWindow(this);
    configWin->exec();  // si es QDialog
}
