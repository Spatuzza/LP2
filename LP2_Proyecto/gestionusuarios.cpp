#include "gestionusuarios.h"
#include "ui_gestionusuarios.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QInputDialog>
#include <QMessageBox>

GestionUsuarios::GestionUsuarios(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GestionUsuarios)
{
    ui->setupUi(this);
    cargarUsuarios();
    actualizarLista();
}

GestionUsuarios::~GestionUsuarios()
{
    delete ui;
}
