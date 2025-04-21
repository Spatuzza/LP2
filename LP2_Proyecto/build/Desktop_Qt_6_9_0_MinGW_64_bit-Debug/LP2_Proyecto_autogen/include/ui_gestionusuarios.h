/********************************************************************************
** Form generated from reading UI file 'gestionusuarios.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONUSUARIOS_H
#define UI_GESTIONUSUARIOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
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
    QListWidget *listWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAgregar;
    QPushButton *btnElimina;
    QPushButton *pushButton_2;

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
        statusbar->setGeometry(QRect(0, 0, 3, 22));
        verticalLayoutWidget = new QWidget(ConfiguracionWindow);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(240, 120, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(verticalLayoutWidget);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);

        horizontalLayoutWidget = new QWidget(ConfiguracionWindow);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(190, 210, 254, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAgregar = new QPushButton(horizontalLayoutWidget);
        btnAgregar->setObjectName("btnAgregar");

        horizontalLayout->addWidget(btnAgregar);

        btnElimina = new QPushButton(horizontalLayoutWidget);
        btnElimina->setObjectName("btnElimina");

        horizontalLayout->addWidget(btnElimina);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(ConfiguracionWindow);

        QMetaObject::connectSlotsByName(ConfiguracionWindow);
    } // setupUi

    void retranslateUi(QDialog *ConfiguracionWindow)
    {
        ConfiguracionWindow->setWindowTitle(QCoreApplication::translate("ConfiguracionWindow", "MainWindow", nullptr));
        btnAgregar->setText(QCoreApplication::translate("ConfiguracionWindow", "Agregar", nullptr));
        btnElimina->setText(QCoreApplication::translate("ConfiguracionWindow", "Eliminar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ConfiguracionWindow", "Estadisticas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfiguracionWindow: public Ui_ConfiguracionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONUSUARIOS_H
