/********************************************************************************
** Form generated from reading UI file 'cadastra_funcionario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRA_FUNCIONARIO_H
#define UI_CADASTRA_FUNCIONARIO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_cadastraprofissional
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label0;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLineEdit *Nome;
    QLineEdit *CPF;
    QLineEdit *Cargo;
    QLineEdit *Salario;
    QSpinBox *Cadeira;
    QLabel *Gravado;

    void setupUi(QDialog *cadastraprofissional)
    {
        if (cadastraprofissional->objectName().isEmpty())
            cadastraprofissional->setObjectName(QString::fromUtf8("cadastraprofissional"));
        cadastraprofissional->resize(240, 320);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icones/barbeiro.png"), QSize(), QIcon::Normal, QIcon::Off);
        cadastraprofissional->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(cadastraprofissional);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(-10, 220, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label0 = new QLabel(cadastraprofissional);
        label0->setObjectName(QString::fromUtf8("label0"));
        label0->setGeometry(QRect(10, 20, 47, 13));
        label1 = new QLabel(cadastraprofissional);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(10, 60, 47, 13));
        label2 = new QLabel(cadastraprofissional);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(10, 100, 47, 13));
        label3 = new QLabel(cadastraprofissional);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(10, 140, 47, 13));
        label4 = new QLabel(cadastraprofissional);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(10, 180, 47, 13));
        Nome = new QLineEdit(cadastraprofissional);
        Nome->setObjectName(QString::fromUtf8("Nome"));
        Nome->setGeometry(QRect(50, 20, 113, 21));
        CPF = new QLineEdit(cadastraprofissional);
        CPF->setObjectName(QString::fromUtf8("CPF"));
        CPF->setGeometry(QRect(50, 60, 113, 21));
        Cargo = new QLineEdit(cadastraprofissional);
        Cargo->setObjectName(QString::fromUtf8("Cargo"));
        Cargo->setGeometry(QRect(50, 100, 113, 21));
        Salario = new QLineEdit(cadastraprofissional);
        Salario->setObjectName(QString::fromUtf8("Salario"));
        Salario->setGeometry(QRect(50, 140, 113, 21));
        Cadeira = new QSpinBox(cadastraprofissional);
        Cadeira->setObjectName(QString::fromUtf8("Cadeira"));
        Cadeira->setGeometry(QRect(60, 180, 42, 22));
        Gravado = new QLabel(cadastraprofissional);
        Gravado->setObjectName(QString::fromUtf8("Gravado"));
        Gravado->setGeometry(QRect(80, 270, 47, 13));

        retranslateUi(cadastraprofissional);
        QObject::connect(buttonBox, SIGNAL(accepted()), cadastraprofissional, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), cadastraprofissional, SLOT(reject()));

        QMetaObject::connectSlotsByName(cadastraprofissional);
    } // setupUi

    void retranslateUi(QDialog *cadastraprofissional)
    {
        cadastraprofissional->setWindowTitle(QApplication::translate("cadastraprofissional", "Cadastro de Profissional", nullptr));
        label0->setText(QApplication::translate("cadastraprofissional", "Nome:", nullptr));
        label1->setText(QApplication::translate("cadastraprofissional", "CPF:", nullptr));
        label2->setText(QApplication::translate("cadastraprofissional", "Cargo:", nullptr));
        label3->setText(QApplication::translate("cadastraprofissional", "Salario", nullptr));
        label4->setText(QApplication::translate("cadastraprofissional", "Cadeira:", nullptr));
        Gravado->setText(QApplication::translate("cadastraprofissional", "l", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastraprofissional: public Ui_cadastraprofissional {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRA_FUNCIONARIO_H
