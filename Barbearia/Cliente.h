//
// Created by Caique Rocha on 25/11/19.
//

#ifndef BABERARIA_CLIENTE_H
#define BABERARIA_CLIENTE_H


#include "Pessoa.h"

class Cliente : public Pessoa {

public:
    Cliente();
    Cliente(string nome, string cpf, string contato);


    virtual ~Cliente();

    string getContato();

    void setContato(string contado);


private:
    string contato;
};


#endif //BABERARIA_CLIENTE_H
