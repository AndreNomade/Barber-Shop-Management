/********************************************************************************
** Form generated from reading UI file 'viewfuncionario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWFUNCIONARIO_H
#define UI_VIEWFUNCIONARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_viewfuncionario
{
public:
    QLineEdit *edtBuscar;
    QPushButton *btnBuscar;
    QLabel *label;
    QTableWidget *tbwFuncionario;
    QPushButton *delete_2;
    QPushButton *edit;

    void setupUi(QDialog *viewfuncionario)
    {
        if (viewfuncionario->objectName().isEmpty())
            viewfuncionario->setObjectName(QString::fromUtf8("viewfuncionario"));
        viewfuncionario->resize(452, 400);
        edtBuscar = new QLineEdit(viewfuncionario);
        edtBuscar->setObjectName(QString::fromUtf8("edtBuscar"));
        edtBuscar->setGeometry(QRect(60, 10, 284, 22));
        btnBuscar = new QPushButton(viewfuncionario);
        btnBuscar->setObjectName(QString::fromUtf8("btnBuscar"));
        btnBuscar->setGeometry(QRect(350, 10, 80, 21));
        label = new QLabel(viewfuncionario);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(23, 10, 31, 22));
        tbwFuncionario = new QTableWidget(viewfuncionario);
        tbwFuncionario->setObjectName(QString::fromUtf8("tbwFuncionario"));
        tbwFuncionario->setGeometry(QRect(23, 40, 409, 299));
        delete_2 = new QPushButton(viewfuncionario);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setGeometry(QRect(80, 350, 111, 21));
        edit = new QPushButton(viewfuncionario);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setGeometry(QRect(260, 350, 101, 21));

        retranslateUi(viewfuncionario);

        QMetaObject::connectSlotsByName(viewfuncionario);
    } // setupUi

    void retranslateUi(QDialog *viewfuncionario)
    {
        viewfuncionario->setWindowTitle(QApplication::translate("viewfuncionario", "Dialog", nullptr));
        btnBuscar->setText(QApplication::translate("viewfuncionario", "Buscar", nullptr));
        label->setText(QApplication::translate("viewfuncionario", "Nome:", nullptr));
        delete_2->setText(QApplication::translate("viewfuncionario", "excuir", nullptr));
        edit->setText(QApplication::translate("viewfuncionario", "Salvar edi\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewfuncionario: public Ui_viewfuncionario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWFUNCIONARIO_H
