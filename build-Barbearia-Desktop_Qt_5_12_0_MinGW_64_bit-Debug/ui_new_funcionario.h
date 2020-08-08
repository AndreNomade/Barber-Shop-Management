/********************************************************************************
** Form generated from reading UI file 'new_funcionario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_FUNCIONARIO_H
#define UI_NEW_FUNCIONARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_new_funcionario
{
public:
    QLabel *label0;
    QLineEdit *Salario;
    QLineEdit *Nome;
    QSpinBox *Cadeira;
    QDialogButtonBox *buttonBox_2;
    QLabel *label4;
    QLineEdit *CPF;
    QLineEdit *Cargo;
    QLabel *label2;
    QLabel *label1;
    QLabel *label3;

    void setupUi(QDialog *new_funcionario)
    {
        if (new_funcionario->objectName().isEmpty())
            new_funcionario->setObjectName(QString::fromUtf8("new_funcionario"));
        new_funcionario->resize(240, 291);
        label0 = new QLabel(new_funcionario);
        label0->setObjectName(QString::fromUtf8("label0"));
        label0->setGeometry(QRect(20, 20, 47, 13));
        Salario = new QLineEdit(new_funcionario);
        Salario->setObjectName(QString::fromUtf8("Salario"));
        Salario->setGeometry(QRect(60, 140, 113, 21));
        Nome = new QLineEdit(new_funcionario);
        Nome->setObjectName(QString::fromUtf8("Nome"));
        Nome->setGeometry(QRect(60, 20, 113, 21));
        Cadeira = new QSpinBox(new_funcionario);
        Cadeira->setObjectName(QString::fromUtf8("Cadeira"));
        Cadeira->setGeometry(QRect(70, 180, 42, 22));
        buttonBox_2 = new QDialogButtonBox(new_funcionario);
        buttonBox_2->setObjectName(QString::fromUtf8("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(0, 220, 221, 41));
        buttonBox_2->setOrientation(Qt::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label4 = new QLabel(new_funcionario);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(20, 180, 47, 13));
        CPF = new QLineEdit(new_funcionario);
        CPF->setObjectName(QString::fromUtf8("CPF"));
        CPF->setGeometry(QRect(60, 60, 113, 21));
        Cargo = new QLineEdit(new_funcionario);
        Cargo->setObjectName(QString::fromUtf8("Cargo"));
        Cargo->setGeometry(QRect(60, 100, 113, 21));
        label2 = new QLabel(new_funcionario);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(20, 100, 47, 13));
        label1 = new QLabel(new_funcionario);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(20, 60, 47, 13));
        label3 = new QLabel(new_funcionario);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(20, 140, 47, 13));

        retranslateUi(new_funcionario);

        QMetaObject::connectSlotsByName(new_funcionario);
    } // setupUi

    void retranslateUi(QDialog *new_funcionario)
    {
        new_funcionario->setWindowTitle(QApplication::translate("new_funcionario", "Dialog", nullptr));
        label0->setText(QApplication::translate("new_funcionario", "Nome:", nullptr));
        label4->setText(QApplication::translate("new_funcionario", "Cadeira:", nullptr));
        label2->setText(QApplication::translate("new_funcionario", "Cargo:", nullptr));
        label1->setText(QApplication::translate("new_funcionario", "CPF:", nullptr));
        label3->setText(QApplication::translate("new_funcionario", "Salario", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_funcionario: public Ui_new_funcionario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_FUNCIONARIO_H
