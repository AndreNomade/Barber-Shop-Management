//
// Created by Caique Rocha on 25/11/19.
//

#include "Catalogo.h"

Catalogo::Catalogo(vector<string> *servicos, vector<float> *valor, vector<int> *tempo) : servicos(servicos),
                                                                                         valor(valor), tempo(tempo) {}

Catalogo::~Catalogo() {

}

vector<string> *Catalogo::getServicos() const {
    return servicos;
}

void Catalogo::setServicos(vector<string> *servicos) {
    Catalogo::servicos = servicos;
}

vector<float> *Catalogo::getValor() const {
    return valor;
}

void Catalogo::setValor(vector<float> *valor) {
    Catalogo::valor = valor;
}

vector<int> *Catalogo::getTempo() const {
    return tempo;
}

void Catalogo::setTempo(vector<int> *tempo) {
    Catalogo::tempo = tempo;
}
