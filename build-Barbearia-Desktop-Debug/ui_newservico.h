/********************************************************************************
** Form generated from reading UI file 'newservico.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSERVICO_H
#define UI_NEWSERVICO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewServico
{
public:
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
    QPushButton *btnSalvar;
    QLabel *gravou;

    void setupUi(QDialog *NewServico)
    {
        if (NewServico->objectName().isEmpty())
            NewServico->setObjectName(QStringLiteral("NewServico"));
        NewServico->resize(292, 340);
        NewServico->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/icones/maquina.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewServico->setWindowIcon(icon);
        widget = new QWidget(NewServico);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 23, 230, 275));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label0 = new QLabel(widget);
        label0->setObjectName(QStringLiteral("label0"));
        label0->setMinimumSize(QSize(0, 0));
        label0->setFrameShape(QFrame::NoFrame);
        label0->setLineWidth(1);
        label0->setMidLineWidth(0);
        label0->setAlignment(Qt::AlignCenter);
        label0->setMargin(0);
        label0->setIndent(-1);

        horizontalLayout->addWidget(label0);

        Nome = new QLineEdit(widget);
        Nome->setObjectName(QStringLiteral("Nome"));

        horizontalLayout->addWidget(Nome);


        verticalLayout->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cbCabelo = new QCheckBox(widget);
        cbCabelo->setObjectName(QStringLiteral("cbCabelo"));

        formLayout->setWidget(1, QFormLayout::LabelRole, cbCabelo);

        cbBarba = new QCheckBox(widget);
        cbBarba->setObjectName(QStringLiteral("cbBarba"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cbBarba);


        verticalLayout->addLayout(formLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        gridLayout->addWidget(dateEdit, 0, 1, 1, 1);

        timeEdit = new QTimeEdit(widget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        gridLayout->addWidget(timeEdit, 1, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        gridLayout->addWidget(spinBox, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        btnSalvar = new QPushButton(widget);
        btnSalvar->setObjectName(QStringLiteral("btnSalvar"));

        verticalLayout->addWidget(btnSalvar);

        gravou = new QLabel(widget);
        gravou->setObjectName(QStringLiteral("gravou"));

        verticalLayout->addWidget(gravou);


        retranslateUi(NewServico);

        QMetaObject::connectSlotsByName(NewServico);
    } // setupUi

    void retranslateUi(QDialog *NewServico)
    {
        NewServico->setWindowTitle(QApplication::translate("NewServico", "Adicionar Servi\303\247o", nullptr));
        label0->setText(QApplication::translate("NewServico", "Cliente:", nullptr));
        label->setText(QApplication::translate("NewServico", "Servi\303\247os:", nullptr));
        cbCabelo->setText(QApplication::translate("NewServico", "Cabelo", nullptr));
        cbBarba->setText(QApplication::translate("NewServico", "Barba", nullptr));
        label_2->setText(QApplication::translate("NewServico", "Data:", nullptr));
        label_3->setText(QApplication::translate("NewServico", "Horario:", nullptr));
        label_4->setText(QApplication::translate("NewServico", "Cadeira:", nullptr));
        btnSalvar->setText(QApplication::translate("NewServico", "Salvar", nullptr));
        gravou->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NewServico: public Ui_NewServico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSERVICO_H
