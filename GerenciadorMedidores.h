#ifndef GERENCIADORMEDIDORES_H
#define GERENCIADORMEDIDORES_H

#include <vector>
#include "Medidor.h"

class GerenciadorMedidores {
private:
    std::vector<Medidor> medidores;

public:
    void cadastrarMedidor(const Medidor& medidor);
    bool removerMedidor(int id);
    std::vector<Medidor*> getMedidoresAtivos();
    Medidor* buscarMedidor(int id);
    const std::vector<Medidor>& getTodosMedidores() const;
};

#endif
