#include "Leitor.h"
#include <iostream>
#include <cstdlib>

Leitor::Leitor(GerenciadorMedidores& gm) : gerenciador(gm) {}

void Leitor::realizarLeitura(Medidor* medidor) {
    double ativa = 100 + rand() % 100;
    double reativa = 50 + rand() % 50;
    medidor->setUltimaColeta(DataHora::agora());
    std::cout << "Leitura realizada para ID " << medidor->getId() << "\n";
}

void Leitor::lerTodosAtivos() {
    auto ativos = gerenciador.getMedidoresAtivos();
    for (auto m : ativos) realizarLeitura(m);
}
