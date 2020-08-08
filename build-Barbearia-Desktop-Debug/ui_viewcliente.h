/********************************************************************************
** Form generated from reading UI file 'viewcliente.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCLIENTE_H
#define UI_VIEWCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewCliente
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtBuscar;
    QPushButton *btnBuscar;
    QTableWidget *tbwCliente;
    QPushButton *pushButton;

    void setupUi(QDialog *viewCliente)
    {
        if (viewCliente->objectName().isEmpty())
            viewCliente->setObjectName(QStringLiteral("viewCliente"));
        viewCliente->resize(452, 388);
        layoutWidget = new QWidget(viewCliente);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 411, 331));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        edtBuscar = new QLineEdit(layoutWidget);
        edtBuscar->setObjectName(QStringLiteral("edtBuscar"));

        horizontalLayout->addWidget(edtBuscar);

        btnBuscar = new QPushButton(layoutWidget);
        btnBuscar->setObjectName(QStringLiteral("btnBuscar"));

        horizontalLayout->addWidget(btnBuscar);


        verticalLayout->addLayout(horizontalLayout);

        tbwCliente = new QTableWidget(layoutWidget);
        tbwCliente->setObjectName(QStringLiteral("tbwCliente"));

        verticalLayout->addWidget(tbwCliente);

        pushButton = new QPushButton(viewCliente);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 360, 121, 21));

        retranslateUi(viewCliente);

        QMetaObject::connectSlotsByName(viewCliente);
    } // setupUi

    void retranslateUi(QDialog *viewCliente)
    {
        viewCliente->setWindowTitle(QApplication::translate("viewCliente", "Ver Cliente", nullptr));
        label->setText(QApplication::translate("viewCliente", "Nome:", nullptr));
        btnBuscar->setText(QApplication::translate("viewCliente", "Buscar", nullptr));
        pushButton->setText(QApplication::translate("viewCliente", "Salvar edi\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewCliente: public Ui_viewCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCLIENTE_H
