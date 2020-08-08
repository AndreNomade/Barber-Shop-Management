/********************************************************************************
** Form generated from reading UI file 'newservico.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSERVICO_H
#define UI_NEWSERVICO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
<<<<<<< HEAD
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
=======
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
>>>>>>> 33d4427e58cfd536095d7a81012c3c83f84e3a9c
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewServico
{
public:
<<<<<<< HEAD
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label0;
    QLineEdit *Nome;
    QFormLayout *formLayout;
    QLabel *label;
    QCheckBox *cbCabelo;
    QCheckBox *cbBarba;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QLabel *label_4;
    QSpinBox *spinBox;
=======
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
>>>>>>> 33d4427e58cfd536095d7a81012c3c83f84e3a9c
    QPushButton *btnSalvar;
    QLabel *gravou;

    void setupUi(QDialog *NewServico)
    {
        if (NewServico->objectName().isEmpty())
            NewServico->setObjectName(QString::fromUtf8("NewServico"));
<<<<<<< HEAD
        NewServico->resize(292, 340);
=======
        NewServico->resize(303, 250);
>>>>>>> 33d4427e58cfd536095d7a81012c3c83f84e3a9c
        NewServico->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icones/maquina.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewServico->setWindowIcon(icon);
<<<<<<< HEAD
        widget = new QWidget(NewServico);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 23, 230, 275));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label0 = new QLabel(widget);
=======
        verticalLayoutWidget = new QWidget(NewServico);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 20, 51, 131));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label0 = new QLabel(verticalLayoutWidget);
>>>>>>> 33d4427e58cfd536095d7a81012c3c83f84e3a9c
        label0->setObjectName(QString::fromUtf8("label0"));
        label0->setMinimumSize(QSize(0, 0));
        label0->setFrameShape(QFrame::NoFrame);
        label0->setLineWidth(1);
        label0->setMidLineWidth(0);
        label0->setAlignment(Qt::AlignCenter);
        label0->setMargin(0);
        label0->setIndent(-1);

<<<<<<< HEAD
        horizontalLayout->addWidget(label0);

        Nome = new QLineEdit(widget);
        Nome->setObjectName(QString::fromUtf8("Nome"));

        horizontalLayout->addWidget(Nome);


        verticalLayout->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cbCabelo = new QCheckBox(widget);
        cbCabelo->setObjectName(QString::fromUtf8("cbCabelo"));

        formLayout->setWidget(1, QFormLayout::LabelRole, cbCabelo);

        cbBarba = new QCheckBox(widget);
        cbBarba->setObjectName(QString::fromUtf8("cbBarba"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cbBarba);


        verticalLayout->addLayout(formLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout->addWidget(dateEdit, 0, 1, 1, 1);

        timeEdit = new QTimeEdit(widget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        gridLayout->addWidget(timeEdit, 1, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout->addWidget(spinBox, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        btnSalvar = new QPushButton(widget);
        btnSalvar->setObjectName(QString::fromUtf8("btnSalvar"));

        verticalLayout->addWidget(btnSalvar);

        gravou = new QLabel(widget);
        gravou->setObjectName(QString::fromUtf8("gravou"));

        verticalLayout->addWidget(gravou);

=======
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
>>>>>>> 33d4427e58cfd536095d7a81012c3c83f84e3a9c

        retranslateUi(NewServico);

        QMetaObject::connectSlotsByName(NewServico);
    } // setupUi

    void retranslateUi(QDialog *NewServico)
    {
        NewServico->setWindowTitle(QApplication::translate("NewServico", "Adicionar Servi\303\247o", nullptr));
<<<<<<< HEAD
        label0->setText(QApplication::translate("NewServico", "Cliente:", nullptr));
        label->setText(QApplication::translate("NewServico", "Servi\303\247os:", nullptr));
        cbCabelo->setText(QApplication::translate("NewServico", "Cabelo", nullptr));
        cbBarba->setText(QApplication::translate("NewServico", "Barba", nullptr));
        label_2->setText(QApplication::translate("NewServico", "Data:", nullptr));
        label_3->setText(QApplication::translate("NewServico", "Horario:", nullptr));
        label_4->setText(QApplication::translate("NewServico", "Cadeira:", nullptr));
=======
        label0->setText(QApplication::translate("NewServico", "Nome:", nullptr));
        label1->setText(QApplication::translate("NewServico", "Valor:", nullptr));
        label2->setText(QApplication::translate("NewServico", "Tempo:", nullptr));
>>>>>>> 33d4427e58cfd536095d7a81012c3c83f84e3a9c
        btnSalvar->setText(QApplication::translate("NewServico", "Salvar", nullptr));
        gravou->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NewServico: public Ui_NewServico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSERVICO_H
