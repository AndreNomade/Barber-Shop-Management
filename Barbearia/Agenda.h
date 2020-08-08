//
// Created by Caique Rocha on 25/11/19.
//

#ifndef BABERARIA_AGENDA_H
#define BABERARIA_AGENDA_H

#include "Cliente.h"
#include "Profissional.h"
#include "Catalogo.h"
#include <vector>

using namespace std;

class Agenda {

public:
    Agenda(const Cliente &cliente, const Profissional &profissional, const Catalogo &catalogo, int horarioLivre);

    virtual ~Agenda();

    const Cliente &getCliente() const;

    void setCliente(const Cliente &cliente);

    const Profissional &getProfissional() const;

    void setProfissional(const Profissional &profissional);

    const Catalogo &getCatalogo() const;

    void setCatalogo(const Catalogo &catalogo);

    int getHorarioLivre() const;

    void setHorarioLivre(int horarioLivre);

private:

    Cliente cliente;
    Profissional profissional;
    Catalogo catalogo;
    int horarioLivre;
};


#endif //BABERARIA_AGENDA_H
