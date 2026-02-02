#include "GerenciadorMedidores.h"
#include <algorithm>
#include <iostream>

void GerenciadorMedidores::cadastrarMedidor(const Medidor& medidor) {
    for (const auto& m : medidores) {
        if (m.getId() == medidor.getId()) {
            std::cout << "Erro: ID já existe.\n";
            return;
        }
    }
    medidores.push_back(medidor);
}

bool GerenciadorMedidores::removerMedidor(int id) {
    auto it = std::find_if(medidores.begin(), medidores.end(),
        [id](const Medidor& m){ return m.getId() == id; });

    if (it != medidores.end()) {
        it->setAtivo(false);
        return true;
    }
    return false;
}

std::vector<Medidor*> GerenciadorMedidores::getMedidoresAtivos() {
    std::vector<Medidor*> ativos;
    for (auto& m : medidores)
        if (m.getAtivo()) ativos.push_back(&m);
    return ativos;
}

Medidor* GerenciadorMedidores::buscarMedidor(int id) {
    for (auto& m : medidores)
        if (m.getId() == id) return &m;
    return nullptr;
}

const std::vector<Medidor>& GerenciadorMedidores::getTodosMedidores() const {
    return medidores;
}
