//
// Created by Caique Rocha on 25/11/19.
//

#include "Cliente.h"
Cliente::Cliente():Pessoa()
{
}
Cliente::Cliente(string nome, string cpf, string contato) : Pessoa(nome, cpf), contato(contato) {}

Cliente::~Cliente() {

}

string Cliente::getContato()  {
    return contato;
}

void Cliente::setContato(string contato) {
    Cliente::contato = contato;
}

