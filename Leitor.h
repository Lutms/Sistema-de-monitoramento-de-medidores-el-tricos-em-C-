#ifndef LEITOR_H
#define LEITOR_H

#include <map>
#include <vector>
#include "GerenciadorMedidores.h"

class Leitor {
private:
    GerenciadorMedidores& gerenciador;
    std::map<int, std::vector<std::pair<DataHora, std::pair<double,double>>>> historico;

public:
    Leitor(GerenciadorMedidores& gm);
    void realizarLeitura(Medidor* medidor);
    void lerTodosAtivos();
};

#endif
