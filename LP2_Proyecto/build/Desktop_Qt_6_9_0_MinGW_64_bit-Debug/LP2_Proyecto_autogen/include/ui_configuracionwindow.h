/********************************************************************************
** Form generated from reading UI file 'configuracionwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURACIONWINDOW_H
#define UI_CONFIGURACIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfiguracionWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnUsuarios;
    QPushButton *btnPreguntas;
    QPushButton *btnvolvrt;

    void setupUi(QDialog *ConfiguracionWindow)
    {
        if (ConfiguracionWindow->objectName().isEmpty())
            ConfiguracionWindow->setObjectName("ConfiguracionWindow");
        ConfiguracionWindow->resize(800, 600);
        centralwidget = new QWidget(ConfiguracionWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setGeometry(QRect(0, 0, 100, 30));
        menubar = new QMenuBar(ConfiguracionWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        statusbar = new QStatusBar(ConfiguracionWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setGeometry(QRect(0, 0, 20, 22));
        verticalLayoutWidget = new QWidget(ConfiguracionWindow);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(260, 120, 160, 86));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnUsuarios = new QPushButton(verticalLayoutWidget);
        btnUsuarios->setObjectName("btnUsuarios");

        verticalLayout->addWidget(btnUsuarios);

        btnPreguntas = new QPushButton(verticalLayoutWidget);
        btnPreguntas->setObjectName("btnPreguntas");

        verticalLayout->addWidget(btnPreguntas);

        btnvolvrt = new QPushButton(verticalLayoutWidget);
        btnvolvrt->setObjectName("btnvolvrt");

        verticalLayout->addWidget(btnvolvrt);


        retranslateUi(ConfiguracionWindow);

        QMetaObject::connectSlotsByName(ConfiguracionWindow);
    } // setupUi

    void retranslateUi(QDialog *ConfiguracionWindow)
    {
        ConfiguracionWindow->setWindowTitle(QCoreApplication::translate("ConfiguracionWindow", "MainWindow", nullptr));
        btnUsuarios->setText(QCoreApplication::translate("ConfiguracionWindow", "Usuario", nullptr));
        btnPreguntas->setText(QCoreApplication::translate("ConfiguracionWindow", "Preguntas", nullptr));
        btnvolvrt->setText(QCoreApplication::translate("ConfiguracionWindow", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfiguracionWindow: public Ui_ConfiguracionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURACIONWINDOW_H
