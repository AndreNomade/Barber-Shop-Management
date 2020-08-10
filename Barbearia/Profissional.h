// Created by: on 25/11/19:
// Caique Rocha 
// André Santana  
// Rafael Turing
// Juan Pablo
// Lucas Marchiori

#ifndef BABERARIA_PROFISSIONAL_H
#define BABERARIA_PROFISSIONAL_H


#include "Pessoa.h"
#include <QString>

class Profissional : public Pessoa{

public:
    Profissional(char* nome, int cpf, char* cargo, float salario, int cadeira);

    virtual ~Profissional();

    char* getCargo();

    void setCargo(char* cargo);

    float getSalario();

    void setSalario(float salario);

    int getCadeira();

    void setCadeira(int cadeira);

private:
    char cargo[30];
    float salario;
    int cadeira;
};


#endif //BABERARIA_PROFISSIONAL_H
