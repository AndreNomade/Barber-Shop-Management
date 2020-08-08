/*
 * Created by:
 * André Santana
 * Caique Rocha
 * Juan Jimenez
 * Lucas Marchiore
 * Rafael Turing
*/

#include "Cadastro.h"
#include "Cliente.h"
#include "Servico.h"

#include <QDebug>

Cadastro::Cadastro(){
}

Cadastro::~Cadastro(){
}

QString Cadastro::gravaFuncionario(Profissional *p){
    QString deu_certo;
    ofstream ofs("Funcionario.txt", ios::app);

    if(ofs){
        ofs << p->getNome() << endl;
        ofs << p->getCpf() << endl;
        ofs << p->getCargo() << endl;
        ofs << p->getSalario() << endl;
        ofs << p->getCadeira() << endl;

        deu_certo = "Gravado com sucesso";
    }

    else{
        deu_certo = "Erro ao gravar";
    }
    ofs.close();
    return deu_certo;
}

QString Cadastro::gravaCliente(Cliente *c)
{
    QString deu_certo;
    ofstream ofs("Cliente.txt", ios::app);


    if(ofs){


        ofs << c->getNome() << endl;
        ofs << c->getContato() << endl;
        ofs << c->getCpf() << endl;


        deu_certo = "Gravado com sucesso";
    }

    else{
        deu_certo = "Erro ao gravar";
    }
    ofs.close();
    return deu_certo;
}

QString Cadastro::gravaServico(Servico *s){
    QString deu_certo;
    ofstream ofs("Servicos.txt", ios::app);
    if(ofs){

        ofs << s->getCliente() << endl;
        ofs << s->getCabelo() << endl;
        ofs << s->getBarba() << endl;
        ofs << s->getCadeira() << endl;
        ofs << s->getData().day() << endl;
        ofs << s->getData().month() << endl;
        ofs << s->getData().year() << endl;
        ofs << s->getHora().hour() << endl;
        ofs << s->getHora().minute() << endl;

        deu_certo = "Gravado com sucesso";
    }
    else{
        deu_certo = "Erro ao gravar";
    }
    ofs.close();
    return deu_certo;
}


QStringList Cadastro::listaClientes(){

    ifstream ifs("Cliente.txt");
    QStringList nomes;

    char nome[30];
    char contato[16];
    char cpf[16];


    if(ifs.is_open()){

        ifs >> nome;
        ifs >> contato;
        ifs >> cpf;

        while(ifs.good()){

           nomes << nome;

           ifs >> nome;
           ifs >> contato;
           ifs >> cpf;
        }
    }
    ifs.close();

    return nomes;
}
void Cadastro::exibeCliente(vector<Cliente> &clientes){
    Cliente c;

    ifstream ifs("Cliente.dat");

    if (ifs.is_open())    {
        ifs.read(reinterpret_cast<char *> (&c), sizeof (Cliente));


           while (ifs.good())
           {
               clientes.push_back(c);
               ifs.read(reinterpret_cast<char *> (&c), sizeof (Cliente));

           }
       }

       ifs.close();
   }

