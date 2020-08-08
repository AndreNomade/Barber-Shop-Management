/********************************************************************************
** Form generated from reading UI file 'viewfuncionario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWFUNCIONARIO_H
#define UI_VIEWFUNCIONARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
<<<<<<< HEAD
#include <QtWidgets/QHBoxLayout>
=======
>>>>>>> 33d4427e58cfd536095d7a81012c3c83f84e3a9c
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
<<<<<<< HEAD
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
=======
>>>>>>> 33d4427e58cfd536095d7a81012c3c83f84e3a9c

QT_BEGIN_NAMESPACE

class Ui_viewfuncionario
{
public:
<<<<<<< HEAD
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtBuscar;
    QPushButton *btnBuscar;
    QTableWidget *tbwFuncionario;
    QHBoxLayout *horizontalLayout_2;
=======
    QLineEdit *edtBuscar;
    QPushButton *btnBuscar;
    QLabel *label;
    QTableWidget *tbwFuncionario;
>>>>>>> 33d4427e58cfd536095d7a81012c3c83f84e3a9c
    QPushButton *delete_2;
    QPushButton *edit;

    void setupUi(QDialog *viewfuncionario)
    {
        if (viewfuncionario->objectName().isEmpty())
            viewfuncionario->setObjectName(QString::fromUtf8("viewfuncionario"));
        viewfuncionario->resize(452, 400);
<<<<<<< HEAD
        widget = new QWidget(viewfuncionario);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(23, 10, 401, 371));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        edtBuscar = new QLineEdit(widget);
        edtBuscar->setObjectName(QString::fromUtf8("edtBuscar"));

        horizontalLayout->addWidget(edtBuscar);

        btnBuscar = new QPushButton(widget);
        btnBuscar->setObjectName(QString::fromUtf8("btnBuscar"));

        horizontalLayout->addWidget(btnBuscar);


        verticalLayout->addLayout(horizontalLayout);

        tbwFuncionario = new QTableWidget(widget);
        tbwFuncionario->setObjectName(QString::fromUtf8("tbwFuncionario"));

        verticalLayout->addWidget(tbwFuncionario);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        delete_2 = new QPushButton(widget);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));

        horizontalLayout_2->addWidget(delete_2);

        edit = new QPushButton(widget);
        edit->setObjectName(QString::fromUtf8("edit"));

        horizontalLayout_2->addWidget(edit);


        verticalLayout->addLayout(horizontalLayout_2);

=======
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
>>>>>>> 33d4427e58cfd536095d7a81012c3c83f84e3a9c

        retranslateUi(viewfuncionario);

        QMetaObject::connectSlotsByName(viewfuncionario);
    } // setupUi

    void retranslateUi(QDialog *viewfuncionario)
    {
        viewfuncionario->setWindowTitle(QApplication::translate("viewfuncionario", "Dialog", nullptr));
<<<<<<< HEAD
        label->setText(QApplication::translate("viewfuncionario", "Nome:", nullptr));
        btnBuscar->setText(QApplication::translate("viewfuncionario", "Buscar", nullptr));
=======
        btnBuscar->setText(QApplication::translate("viewfuncionario", "Buscar", nullptr));
        label->setText(QApplication::translate("viewfuncionario", "Nome:", nullptr));
>>>>>>> 33d4427e58cfd536095d7a81012c3c83f84e3a9c
        delete_2->setText(QApplication::translate("viewfuncionario", "excuir", nullptr));
        edit->setText(QApplication::translate("viewfuncionario", "Salvar edi\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewfuncionario: public Ui_viewfuncionario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWFUNCIONARIO_H
