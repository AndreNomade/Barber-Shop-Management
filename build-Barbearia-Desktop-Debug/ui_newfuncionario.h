/********************************************************************************
** Form generated from reading UI file 'newfuncionario.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFUNCIONARIO_H
#define UI_NEWFUNCIONARIO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewFuncionario
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label0;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QVBoxLayout *verticalLayout;
    QLineEdit *Nome;
    QLineEdit *CPF;
    QLineEdit *Cargo;
    QLineEdit *Salario;
    QSpinBox *Cadeira;
    QLabel *gravou;
    QPushButton *btnSalvar;

    void setupUi(QDialog *NewFuncionario)
    {
        if (NewFuncionario->objectName().isEmpty())
            NewFuncionario->setObjectName(QStringLiteral("NewFuncionario"));
        NewFuncionario->resize(263, 309);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/icones/barbeiro.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewFuncionario->setWindowIcon(icon);
        widget = new QWidget(NewFuncionario);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 30, 201, 251));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label0 = new QLabel(widget);
        label0->setObjectName(QStringLiteral("label0"));

        verticalLayout_2->addWidget(label0);

        label1 = new QLabel(widget);
        label1->setObjectName(QStringLiteral("label1"));

        verticalLayout_2->addWidget(label1);

        label2 = new QLabel(widget);
        label2->setObjectName(QStringLiteral("label2"));

        verticalLayout_2->addWidget(label2);

        label3 = new QLabel(widget);
        label3->setObjectName(QStringLiteral("label3"));

        verticalLayout_2->addWidget(label3);

        label4 = new QLabel(widget);
        label4->setObjectName(QStringLiteral("label4"));

        verticalLayout_2->addWidget(label4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Nome = new QLineEdit(widget);
        Nome->setObjectName(QStringLiteral("Nome"));

        verticalLayout->addWidget(Nome);

        CPF = new QLineEdit(widget);
        CPF->setObjectName(QStringLiteral("CPF"));

        verticalLayout->addWidget(CPF);

        Cargo = new QLineEdit(widget);
        Cargo->setObjectName(QStringLiteral("Cargo"));

        verticalLayout->addWidget(Cargo);

        Salario = new QLineEdit(widget);
        Salario->setObjectName(QStringLiteral("Salario"));

        verticalLayout->addWidget(Salario);

        Cadeira = new QSpinBox(widget);
        Cadeira->setObjectName(QStringLiteral("Cadeira"));

        verticalLayout->addWidget(Cadeira);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        gravou = new QLabel(widget);
        gravou->setObjectName(QStringLiteral("gravou"));

        verticalLayout_3->addWidget(gravou);

        btnSalvar = new QPushButton(widget);
        btnSalvar->setObjectName(QStringLiteral("btnSalvar"));

        verticalLayout_3->addWidget(btnSalvar);


        retranslateUi(NewFuncionario);

        QMetaObject::connectSlotsByName(NewFuncionario);
    } // setupUi

    void retranslateUi(QDialog *NewFuncionario)
    {
        NewFuncionario->setWindowTitle(QApplication::translate("NewFuncionario", "Cadastro Funcion\303\241rio", nullptr));
        label0->setText(QApplication::translate("NewFuncionario", "Nome:", nullptr));
        label1->setText(QApplication::translate("NewFuncionario", "CPF:", nullptr));
        label2->setText(QApplication::translate("NewFuncionario", "Cargo:", nullptr));
        label3->setText(QApplication::translate("NewFuncionario", "Salario", nullptr));
        label4->setText(QApplication::translate("NewFuncionario", "Cadeira:", nullptr));
        gravou->setText(QString());
        btnSalvar->setText(QApplication::translate("NewFuncionario", "Salvar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewFuncionario: public Ui_NewFuncionario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFUNCIONARIO_H
