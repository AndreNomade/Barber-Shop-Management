// Created by: on 25/11/19:
//Caique Rocha 
//André Santana  
//Rafael Turing
//Juan Pablo
//Lucas Marchiori

#include "Cliente.h"
Cliente::Cliente():Pessoa()
{
}
Cliente::Cliente(char* nome, int cpf, int contato) : Pessoa(nome, cpf), contato(contato) {}

Cliente::~Cliente() {

}

int Cliente::getContato()  {
    return contato;
}

void Cliente::setContato(int contato) {
    Cliente::contato = contato;
}

