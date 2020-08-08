/********************************************************************************
** Form generated from reading UI file 'newcliente.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCLIENTE_H
#define UI_NEWCLIENTE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_NewCliente
{
public:
    QLineEdit *Celular;
    QLineEdit *Nome;
    QLabel *label2;
    QLabel *label0;
    QLineEdit *CPF;
    QDialogButtonBox *buttonBox_2;
    QLabel *label1;
    QLabel *gravou;

    void setupUi(QDialog *NewCliente)
    {
        if (NewCliente->objectName().isEmpty())
            NewCliente->setObjectName(QString::fromUtf8("NewCliente"));
        NewCliente->resize(240, 245);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icones/cliente.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewCliente->setWindowIcon(icon);
        Celular = new QLineEdit(NewCliente);
        Celular->setObjectName(QString::fromUtf8("Celular"));
        Celular->setGeometry(QRect(80, 100, 113, 21));
        Nome = new QLineEdit(NewCliente);
        Nome->setObjectName(QString::fromUtf8("Nome"));
        Nome->setGeometry(QRect(80, 20, 113, 21));
        label2 = new QLabel(NewCliente);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(40, 100, 47, 13));
        label0 = new QLabel(NewCliente);
        label0->setObjectName(QString::fromUtf8("label0"));
        label0->setGeometry(QRect(40, 20, 47, 13));
        CPF = new QLineEdit(NewCliente);
        CPF->setObjectName(QString::fromUtf8("CPF"));
        CPF->setGeometry(QRect(80, 60, 113, 21));
        buttonBox_2 = new QDialogButtonBox(NewCliente);
        buttonBox_2->setObjectName(QString::fromUtf8("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(-20, 160, 221, 41));
        buttonBox_2->setOrientation(Qt::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Discard|QDialogButtonBox::Save);
        label1 = new QLabel(NewCliente);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(40, 60, 47, 13));
        gravou = new QLabel(NewCliente);
        gravou->setObjectName(QString::fromUtf8("gravou"));
        gravou->setGeometry(QRect(40, 210, 171, 20));

        retranslateUi(NewCliente);

        QMetaObject::connectSlotsByName(NewCliente);
    } // setupUi

    void retranslateUi(QDialog *NewCliente)
    {
        NewCliente->setWindowTitle(QApplication::translate("NewCliente", "Cadastro Cliente", nullptr));
        label2->setText(QApplication::translate("NewCliente", "Celular:", nullptr));
        label0->setText(QApplication::translate("NewCliente", "Nome:", nullptr));
        label1->setText(QApplication::translate("NewCliente", "CPF:", nullptr));
        gravou->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NewCliente: public Ui_NewCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCLIENTE_H
