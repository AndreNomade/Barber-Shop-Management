/********************************************************************************
** Form generated from reading UI file 'viewcliente.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCLIENTE_H
#define UI_VIEWCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_viewCliente
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *Nome;
    QLineEdit *CPF;
    QLineEdit *Contato;
    QLabel *gravou;

    void setupUi(QDialog *viewCliente)
    {
        if (viewCliente->objectName().isEmpty())
            viewCliente->setObjectName(QString::fromUtf8("viewCliente"));
        viewCliente->resize(279, 213);
        buttonBox = new QDialogButtonBox(viewCliente);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 150, 261, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::RestoreDefaults|QDialogButtonBox::Save);
        buttonBox->setCenterButtons(false);
        label = new QLabel(viewCliente);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 47, 13));
        label_2 = new QLabel(viewCliente);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 47, 13));
        label_3 = new QLabel(viewCliente);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 47, 13));
        Nome = new QComboBox(viewCliente);
        Nome->setObjectName(QString::fromUtf8("Nome"));
        Nome->setGeometry(QRect(50, 30, 211, 22));
        CPF = new QLineEdit(viewCliente);
        CPF->setObjectName(QString::fromUtf8("CPF"));
        CPF->setGeometry(QRect(50, 70, 211, 21));
        Contato = new QLineEdit(viewCliente);
        Contato->setObjectName(QString::fromUtf8("Contato"));
        Contato->setGeometry(QRect(60, 110, 201, 21));
        gravou = new QLabel(viewCliente);
        gravou->setObjectName(QString::fromUtf8("gravou"));
        gravou->setGeometry(QRect(60, 190, 151, 16));

        retranslateUi(viewCliente);
        QObject::connect(buttonBox, SIGNAL(accepted()), viewCliente, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), viewCliente, SLOT(reject()));

        QMetaObject::connectSlotsByName(viewCliente);
    } // setupUi

    void retranslateUi(QDialog *viewCliente)
    {
        viewCliente->setWindowTitle(QApplication::translate("viewCliente", "Ver Cliente", nullptr));
        label->setText(QApplication::translate("viewCliente", "Nome:", nullptr));
        label_2->setText(QApplication::translate("viewCliente", "CPF:", nullptr));
        label_3->setText(QApplication::translate("viewCliente", "Contato:", nullptr));
        gravou->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class viewCliente: public Ui_viewCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCLIENTE_H
