/********************************************************************************
** Form generated from reading UI file 'newfuncionario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFUNCIONARIO_H
#define UI_NEWFUNCIONARIO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_NewFuncionario
{
public:
    QLineEdit *Cargo;
    QSpinBox *Cadeira;
    QLabel *label4;
    QLineEdit *Salario;
    QLabel *label3;
    QLabel *label2;
    QLineEdit *Nome;
    QLabel *label0;
    QLineEdit *CPF;
    QLabel *label1;
    QDialogButtonBox *buttonBox_2;
    QLabel *gravou;

    void setupUi(QDialog *NewFuncionario)
    {
        if (NewFuncionario->objectName().isEmpty())
            NewFuncionario->setObjectName(QString::fromUtf8("NewFuncionario"));
        NewFuncionario->resize(240, 320);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icones/barbeiro.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewFuncionario->setWindowIcon(icon);
        Cargo = new QLineEdit(NewFuncionario);
        Cargo->setObjectName(QString::fromUtf8("Cargo"));
        Cargo->setGeometry(QRect(70, 110, 113, 21));
        Cadeira = new QSpinBox(NewFuncionario);
        Cadeira->setObjectName(QString::fromUtf8("Cadeira"));
        Cadeira->setGeometry(QRect(80, 190, 42, 22));
        label4 = new QLabel(NewFuncionario);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(30, 190, 47, 13));
        Salario = new QLineEdit(NewFuncionario);
        Salario->setObjectName(QString::fromUtf8("Salario"));
        Salario->setGeometry(QRect(70, 150, 113, 21));
        label3 = new QLabel(NewFuncionario);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(30, 150, 47, 13));
        label2 = new QLabel(NewFuncionario);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(30, 110, 47, 13));
        Nome = new QLineEdit(NewFuncionario);
        Nome->setObjectName(QString::fromUtf8("Nome"));
        Nome->setGeometry(QRect(70, 30, 113, 21));
        label0 = new QLabel(NewFuncionario);
        label0->setObjectName(QString::fromUtf8("label0"));
        label0->setGeometry(QRect(30, 30, 47, 13));
        CPF = new QLineEdit(NewFuncionario);
        CPF->setObjectName(QString::fromUtf8("CPF"));
        CPF->setGeometry(QRect(70, 70, 113, 21));
        label1 = new QLabel(NewFuncionario);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(30, 70, 47, 13));
        buttonBox_2 = new QDialogButtonBox(NewFuncionario);
        buttonBox_2->setObjectName(QString::fromUtf8("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(-20, 230, 221, 41));
        buttonBox_2->setOrientation(Qt::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Discard|QDialogButtonBox::Save);
        gravou = new QLabel(NewFuncionario);
        gravou->setObjectName(QString::fromUtf8("gravou"));
        gravou->setGeometry(QRect(30, 280, 171, 20));

        retranslateUi(NewFuncionario);

        QMetaObject::connectSlotsByName(NewFuncionario);
    } // setupUi

    void retranslateUi(QDialog *NewFuncionario)
    {
        NewFuncionario->setWindowTitle(QApplication::translate("NewFuncionario", "Cadastro Funcion\303\241rio", nullptr));
        label4->setText(QApplication::translate("NewFuncionario", "Cadeira:", nullptr));
        label3->setText(QApplication::translate("NewFuncionario", "Salario", nullptr));
        label2->setText(QApplication::translate("NewFuncionario", "Cargo:", nullptr));
        label0->setText(QApplication::translate("NewFuncionario", "Nome:", nullptr));
        label1->setText(QApplication::translate("NewFuncionario", "CPF:", nullptr));
        gravou->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NewFuncionario: public Ui_NewFuncionario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFUNCIONARIO_H
