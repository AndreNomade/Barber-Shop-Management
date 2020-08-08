//
// Created by Caique Rocha on 25/11/19.
//

#ifndef BABERARIA_CATALOGO_H
#define BABERARIA_CATALOGO_H


#include <vector>
#include <string>

using namespace std;
class Catalogo {

public:

    Catalogo(vector<string> *servicos, vector<float> *valor, vector<int> *tempo);

    virtual ~Catalogo();

    vector<string> *getServicos() const;

    void setServicos(vector<string> *servicos);

    vector<float> *getValor() const;

    void setValor(vector<float> *valor);

    vector<int> *getTempo() const;

    void setTempo(vector<int> *tempo);

private:
    vector <string>* servicos;
    vector <float>* valor;
    vector <int>* tempo;
};


#endif //BABERARIA_CATALOGO_H
