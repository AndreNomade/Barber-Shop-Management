#include "newcliente.h"
#include "ui_newcliente.h"

NewCliente::NewCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewCliente)
{
    ui->setupUi(this);
}

NewCliente::~NewCliente()
{
    delete ui;
}

void NewCliente::on_btnSalvar_clicked()
{
    Cliente *c;
    //quando for pegar texto de algum widget, ele vem no formato QString, logo é necessario convertelo para o tipo a ser usado

    char str_nome[50];
    char cpf[15];
    char contato[15];
    strcpy(str_nome, ui -> edtNome -> text().toStdString().c_str()); //transforma o nome de QString para std::string

    strcpy(cpf, ui -> edtCpf -> text().toStdString().c_str()); //transforma o cpf de QString para std::string
    strcpy(contato, ui -> edtContato -> text().toStdString().c_str()); //transforma o cpf de QString para std::string
    //int cpf = ui -> edtCpf -> text().toInt(); //transforma o cpf de QString para int


    //int Contato = ui ->edtContato -> text().toInt();

    c = new Cliente(str_nome, cpf, contato);

    Cadastro cad;

    ui -> edtNome -> clear();
    ui -> edtCpf -> clear();
    ui -> edtContato -> clear();

    ui ->gravou ->setText(cad.gravaCliente(c)); //define o texto da label dependendo se deu ou não certo a gravação
}
