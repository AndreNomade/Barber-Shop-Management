/********************************************************************************
** Form generated from reading UI file 'viewfuncionario.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWFUNCIONARIO_H
#define UI_VIEWFUNCIONARIO_H

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

class Ui_viewfuncionario
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtBuscar;
    QPushButton *btnBuscar;
    QTableWidget *tbwFuncionario;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *delete_2;
    QPushButton *edit;

    void setupUi(QDialog *viewfuncionario)
    {
        if (viewfuncionario->objectName().isEmpty())
            viewfuncionario->setObjectName(QStringLiteral("viewfuncionario"));
        viewfuncionario->resize(452, 400);
        widget = new QWidget(viewfuncionario);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(23, 10, 401, 371));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        edtBuscar = new QLineEdit(widget);
        edtBuscar->setObjectName(QStringLiteral("edtBuscar"));

        horizontalLayout->addWidget(edtBuscar);

        btnBuscar = new QPushButton(widget);
        btnBuscar->setObjectName(QStringLiteral("btnBuscar"));

        horizontalLayout->addWidget(btnBuscar);


        verticalLayout->addLayout(horizontalLayout);

        tbwFuncionario = new QTableWidget(widget);
        tbwFuncionario->setObjectName(QStringLiteral("tbwFuncionario"));

        verticalLayout->addWidget(tbwFuncionario);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        delete_2 = new QPushButton(widget);
        delete_2->setObjectName(QStringLiteral("delete_2"));

        horizontalLayout_2->addWidget(delete_2);

        edit = new QPushButton(widget);
        edit->setObjectName(QStringLiteral("edit"));

        horizontalLayout_2->addWidget(edit);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(viewfuncionario);

        QMetaObject::connectSlotsByName(viewfuncionario);
    } // setupUi

    void retranslateUi(QDialog *viewfuncionario)
    {
        viewfuncionario->setWindowTitle(QApplication::translate("viewfuncionario", "Dialog", nullptr));
        label->setText(QApplication::translate("viewfuncionario", "Nome:", nullptr));
        btnBuscar->setText(QApplication::translate("viewfuncionario", "Buscar", nullptr));
        delete_2->setText(QApplication::translate("viewfuncionario", "excuir", nullptr));
        edit->setText(QApplication::translate("viewfuncionario", "Salvar edi\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewfuncionario: public Ui_viewfuncionario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWFUNCIONARIO_H
