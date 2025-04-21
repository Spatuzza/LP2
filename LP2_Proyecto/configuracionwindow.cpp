#include "configuracionwindow.h"
#include "ui_configuracionwindow.h"
#include <QMessageBox>

ConfiguracionWindow::ConfiguracionWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ConfiguracionWindow)
{
    ui->setupUi(this);

    connect(ui->btnUsuarios, &QPushButton::clicked, this, &ConfiguracionWindow::on_btnUsuarios_clicked);
    connect(ui->btnPreguntas, &QPushButton::clicked, this, &ConfiguracionWindow::on_btnPreguntas_clicked);
}

ConfiguracionWindow::~ConfiguracionWindow()
{
    delete ui;
}

void ConfiguracionWindow::on_btnUsuarios_clicked()
{
    QMessageBox::information(this, "Usuarios", "Aquí se abrirá la gestión de usuarios.");
}

void ConfiguracionWindow::on_btnPreguntas_clicked()
{
    QMessageBox::information(this, "Preguntas", "Aquí se abrirá la gestión de preguntas.");
}
