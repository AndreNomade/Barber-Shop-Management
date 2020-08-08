//
// Created by Caique Rocha on 25/11/19.
//

#include "Pessoa.h"


Pessoa::Pessoa(){
}

Pessoa::Pessoa(string nome, string cpf): nome(nome),cpf(cpf){


}

Pessoa::~Pessoa(){
}

string Pessoa::getNome() {
    return nome;
}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}

string Pessoa::getCpf(){
    return cpf;
}

void Pessoa::setCpf(string cpf) {
    this->cpf = cpf;
}

