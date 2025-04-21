#ifndef CONFIGURACIONWINDOW_H
#define CONFIGURACIONWINDOW_H

#include <QDialog>

namespace Ui {
class ConfiguracionWindow;
}

class ConfiguracionWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ConfiguracionWindow(QWidget *parent = nullptr);
    ~ConfiguracionWindow();

private slots:
    void on_btnUsuarios_clicked();
    void on_btnPreguntas_clicked();

private:
    Ui::ConfiguracionWindow *ui;
};

#endif // CONFIGURACIONWINDOW_H
