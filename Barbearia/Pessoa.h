//
// Created by Caique Rocha on 25/11/19.
//

#ifndef BABERARIA_PESSOA_H
#define BABERARIA_PESSOA_H

#include <QString>
using namespace std;
class Pessoa {

public:

    Pessoa();
    Pessoa(string nome, string cpf);


    virtual ~Pessoa();

    string getNome();

    void setNome(string nome);

    string getCpf();

    void setCpf(string cpf);



private:
    string nome;
    string cpf;

};


#endif //BABERARIA_PESSOA_H
