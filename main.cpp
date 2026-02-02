#include <iostream>
#include <thread>
#include <chrono>
#include "GerenciadorMedidores.h"
#include "Leitor.h"

int main() {
    GerenciadorMedidores gerenciador;
    Leitor leitor(gerenciador);

    std::cout << "Sistema de Monitoramento ELO2180 iniciado.\n";
    return 0;
}
