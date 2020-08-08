//
// Created by Caique Rocha on 25/11/19.
//

#ifndef BABERARIA_CADASTRO_H
#define BABERARIA_CADASTRO_H
#include "Profissional.h"
#include "Cliente.h"
#include "Servico.h"
#include "Agenda.h" 
#include <vector>
#include <fstream>
#include <QString>
#include <QDebug>
/* classe cadastro sera responsavel por todas as telas de "adicionar" e "visualizar" do programa" */
class Cadastro {
    public:
        Cadastro();
        virtual ~Cadastro();
        QString gravaFuncionario(Profissional* p);
        QString gravaCliente(Cliente * c);
        QString gravaAgenda (Agenda *g);
        QString gravaServico(Servico *s);
        void exibeCliente(vector<Cliente>&);

        static QStringList listaClientes();
    private:

};


#endif //BABERARIA_CADASTRO_H
