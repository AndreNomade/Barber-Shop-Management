// Created by: on 25/11/19:
//Caique Rocha 
//André Santana  
//Rafael Turing
//Juan Pablo
//Lucas Marchiori

#include "Pessoa.h"


Pessoa::Pessoa()
{
}

Pessoa::Pessoa(char* nome, int cpf)
{

   strcpy(this->nome, nome);
   this->cpf = cpf;
}

Pessoa::~Pessoa()
{
}

char* Pessoa::getNome() {
    return nome;
}

void Pessoa::setNome(char* nome) {
    strcpy(this->nome, nome);
}

int Pessoa::getCpf() const
{
    return cpf;
}

void Pessoa::setCpf(int cpf) {
    this->cpf = cpf;
}

