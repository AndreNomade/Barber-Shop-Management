//
// Created by Caique Rocha on 25/11/19.
//

#include "Agenda.h"

Agenda::Agenda(const Cliente &cliente, const Profissional &profissional, const Catalogo &catalogo, int horarioLivre)
        : cliente(cliente), profissional(profissional), catalogo(catalogo), horarioLivre(horarioLivre) {}

Agenda::~Agenda() {

}

const Cliente &Agenda::getCliente() const {
    return cliente;
}

void Agenda::setCliente(const Cliente &cliente) {
    Agenda::cliente = cliente;
}

const Profissional &Agenda::getProfissional() const {
    return profissional;
}

void Agenda::setProfissional(const Profissional &profissional) {
    Agenda::profissional = profissional;
}

const Catalogo &Agenda::getCatalogo() const {
    return catalogo;
}

void Agenda::setCatalogo(const Catalogo &catalogo) {
    Agenda::catalogo = catalogo;
}

int Agenda::getHorarioLivre() const {
    return horarioLivre;
}

void Agenda::setHorarioLivre(int horarioLivre) {
    Agenda::horarioLivre = horarioLivre;
}
