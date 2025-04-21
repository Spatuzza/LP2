#ifndef GESTIONUSUARIOS_H
#define GESTIONUSUARIOS_H

#include <QDialog>
#include <QJsonArray>

namespace Ui {
class GestionUsuarios;
}

class GestionUsuarios : public QDialog
{
    Q_OBJECT

public:
    explicit GestionUsuarios(QWidget *parent = nullptr);
    ~GestionUsuarios();

private slots:
    void on_btnAgregar_clicked();
    void on_btnEliminar_clicked();
    void on_btnEstadisticas_clicked();

private:
    Ui::GestionUsuarios *ui;
    QJsonArray usuarios;

    void cargarUsuarios();
    void guardarUsuarios();
    void actualizarLista();
};

#endif // GESTIONUSUARIOS_H
