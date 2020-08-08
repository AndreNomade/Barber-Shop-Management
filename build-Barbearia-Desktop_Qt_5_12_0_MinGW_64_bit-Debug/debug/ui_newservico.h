/********************************************************************************
** Form generated from reading UI file 'newservico.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSERVICO_H
#define UI_NEWSERVICO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewServico
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label0;
    QLabel *label1;
    QLabel *label2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *Nome;
    QLineEdit *Valor;
    QLineEdit *Tempo;
    QPushButton *btnSalvar;
    QLabel *gravou;

    void setupUi(QDialog *NewServico)
    {
        if (NewServico->objectName().isEmpty())
            NewServico->setObjectName(QString::fromUtf8("NewServico"));
        NewServico->resize(303, 250);
        NewServico->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icones/maquina.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewServico->setWindowIcon(icon);
        verticalLayoutWidget = new QWidget(NewServico);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 20, 51, 131));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label0 = new QLabel(verticalLayoutWidget);
        label0->setObjectName(QString::fromUtf8("label0"));
        label0->setMinimumSize(QSize(0, 0));
        label0->setFrameShape(QFrame::NoFrame);
        label0->setLineWidth(1);
        label0->setMidLineWidth(0);
        label0->setAlignment(Qt::AlignCenter);
        label0->setMargin(0);
        label0->setIndent(-1);

        verticalLayout_3->addWidget(label0, 0, Qt::AlignHCenter);

        label1 = new QLabel(verticalLayoutWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setMinimumSize(QSize(0, 0));
        label1->setFrameShape(QFrame::NoFrame);
        label1->setTextFormat(Qt::AutoText);
        label1->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label1, 0, Qt::AlignHCenter);

        label2 = new QLabel(verticalLayoutWidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setFrameShape(QFrame::NoFrame);
        label2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label2);

        verticalLayoutWidget_2 = new QWidget(NewServico);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(90, 20, 151, 141));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Nome = new QLineEdit(verticalLayoutWidget_2);
        Nome->setObjectName(QString::fromUtf8("Nome"));

        verticalLayout_2->addWidget(Nome);

        Valor = new QLineEdit(verticalLayoutWidget_2);
        Valor->setObjectName(QString::fromUtf8("Valor"));

        verticalLayout_2->addWidget(Valor);

        Tempo = new QLineEdit(verticalLayoutWidget_2);
        Tempo->setObjectName(QString::fromUtf8("Tempo"));

        verticalLayout_2->addWidget(Tempo);

        btnSalvar = new QPushButton(NewServico);
        btnSalvar->setObjectName(QString::fromUtf8("btnSalvar"));
        btnSalvar->setGeometry(QRect(60, 200, 161, 31));
        gravou = new QLabel(NewServico);
        gravou->setObjectName(QString::fromUtf8("gravou"));
        gravou->setGeometry(QRect(30, 170, 221, 21));

        retranslateUi(NewServico);

        QMetaObject::connectSlotsByName(NewServico);
    } // setupUi

    void retranslateUi(QDialog *NewServico)
    {
        NewServico->setWindowTitle(QApplication::translate("NewServico", "Adicionar Servi\303\247o", nullptr));
        label0->setText(QApplication::translate("NewServico", "Nome:", nullptr));
        label1->setText(QApplication::translate("NewServico", "Valor:", nullptr));
        label2->setText(QApplication::translate("NewServico", "Tempo:", nullptr));
        btnSalvar->setText(QApplication::translate("NewServico", "Salvar", nullptr));
        gravou->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NewServico: public Ui_NewServico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSERVICO_H
