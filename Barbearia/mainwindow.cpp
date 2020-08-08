#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace  std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ifstream ifs("Servicos.txt");

    ui->tbwServicos->setColumnCount(5);
    QStringList header = {"Cliente", "Hora", "Data", "Cadeira",  "Serviços"};

    ui->tbwServicos->setHorizontalHeaderLabels(header);

    ui->tbwServicos->setColumnWidth(0, 100);
    ui->tbwServicos->setColumnWidth(1, 100);
    ui->tbwServicos->setColumnWidth(2, 100);
    ui->tbwServicos->setColumnWidth(3, 100);
    ui->tbwServicos->setColumnWidth(4, 150);

    if(ifs.is_open()){

        int linha = 0;

        char cliente[30];

        int dia, mes, ano, hora, minuto;
        int cadeira;
        bool cabelo;
        bool barba;



        ifs >> cliente;
        ifs >> cabelo;
        ifs >> barba;
        ifs >> cadeira;
        ifs >> dia;
        ifs >> mes;
        ifs >> ano;
        ifs >> hora;
        ifs >> minuto;




        while(ifs.good()){
            ui->tbwServicos->insertRow(linha);

            QString sHora = QString::number(hora).rightJustified(2, '0') + ":" + QString::number(minuto).rightJustified(2, '0');
            QString sData = QString::number(dia).rightJustified(2, '0') + "/" + QString::number(mes).rightJustified(2, '0') + "/" + QString::number(ano);

            ui->tbwServicos->setItem(linha, 0, new QTableWidgetItem(cliente));
            ui->tbwServicos->setItem(linha, 1, new QTableWidgetItem(sHora));
            ui->tbwServicos->setItem(linha, 2, new QTableWidgetItem(sData));
            ui->tbwServicos->setItem(linha, 3, new QTableWidgetItem(QString::number(cadeira)));
            ui->tbwServicos->setItem(linha, 4, new QTableWidgetItem(Servico::getServicos(cabelo, barba)));


            ifs >> cliente;
            ifs >> cabelo;
            ifs >> barba;
            ifs >> cadeira;
            ifs >> dia;
            ifs >> mes;
            ifs >> ano;
            ifs >> hora;
            ifs >> minuto;

            linha++;
        }
    }
    ifs.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_novoFuncionario_triggered()
{
    NewFuncionario *tela = new NewFuncionario;
    tela->show();
}

void MainWindow::on_adicionarCliente_triggered()
{
    NewCliente *cliente = new NewCliente;
    cliente->show();
}

void MainWindow::on_buscarCliente_triggered()
{
    viewCliente *cliente = new viewCliente;
    cliente->show();
}

void MainWindow::on_adicionarServico_triggered(){
    NewServico *add_serv = new NewServico;
    add_serv->show();
}

void MainWindow::on_listarServicos_triggered(){
    viewServicos *lista_serv = new viewServicos;
    lista_serv->show();
}

void MainWindow::on_excluirFuncionario_triggered()
{
    viewfuncionario *lista_func = new viewfuncionario;
    lista_func -> show();
}
