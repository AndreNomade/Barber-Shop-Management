/********************************************************************************
** Form generated from reading UI file 'viewservicos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWSERVICOS_H
#define UI_VIEWSERVICOS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_viewServicos
{
public:
    QTableWidget *tbwServicos;
    QLabel *label;
    QPushButton *save;
    QLabel *gravo;

    void setupUi(QDialog *viewServicos)
    {
        if (viewServicos->objectName().isEmpty())
            viewServicos->setObjectName(QString::fromUtf8("viewServicos"));
        viewServicos->resize(474, 517);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icones/maquina.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewServicos->setWindowIcon(icon);
        tbwServicos = new QTableWidget(viewServicos);
        tbwServicos->setObjectName(QString::fromUtf8("tbwServicos"));
        tbwServicos->setGeometry(QRect(20, 60, 431, 391));
        label = new QLabel(viewServicos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 431, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(11);
        label->setFont(font);
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(0);
        save = new QPushButton(viewServicos);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(180, 470, 111, 21));
        gravo = new QLabel(viewServicos);
        gravo->setObjectName(QString::fromUtf8("gravo"));
        gravo->setGeometry(QRect(140, 490, 241, 20));

        retranslateUi(viewServicos);

        QMetaObject::connectSlotsByName(viewServicos);
    } // setupUi

    void retranslateUi(QDialog *viewServicos)
    {
        viewServicos->setWindowTitle(QApplication::translate("viewServicos", "Lista de Servi\303\247os", nullptr));
        label->setText(QApplication::translate("viewServicos", "Servi\303\247os disponiveis", nullptr));
        save->setText(QApplication::translate("viewServicos", "Salvar altera\303\247\303\265es", nullptr));
        gravo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class viewServicos: public Ui_viewServicos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWSERVICOS_H
