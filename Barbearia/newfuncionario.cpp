#include "newfuncionario.h"
#include "ui_newfuncionario.h"

NewFuncionario::NewFuncionario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewFuncionario)
{
    ui->setupUi(this);
}

NewFuncionario::~NewFuncionario()
{
    delete ui;
}

void NewFuncionario::on_btnSalvar_clicked()
{
    Profissional *p;

    char str_nome[50];
    char str_cargo[30];

    char cpf[15];


    strcpy(cpf, ui -> CPF -> text().toStdString().c_str()); //transforma o cpf de QString para std::string

    strcpy(str_nome, ui -> Nome -> text().toStdString().c_str());

    strcpy(str_cargo, ui -> Cargo -> text().toStdString().c_str());


    int cadeira = ui ->Cadeira -> value();
    float salario = ui -> Salario -> text().toFloat();

    p = new Profissional(str_nome, cpf, str_cargo , salario, cadeira);

    Cadastro cad;

    ui -> Nome -> clear();
    ui -> CPF -> clear();
    ui -> Cargo -> clear();
    ui -> Cadeira -> clear();
    ui -> Salario -> clear();

    ui ->gravou ->setText(cad.gravaFuncionario(p));
}
