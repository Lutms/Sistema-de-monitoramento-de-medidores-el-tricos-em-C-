#include "Medidor.h"
#include <iostream>

Medidor::Medidor(std::string n, int i, std::string t, std::string ns, std::string f,
                 DataHora uc, std::string p, std::string e, int port)
    : nome(n.substr(0,20)), id(i), tipo(t), numeroSerie(ns), funcao(f),
      ultimaColeta(uc), ponto(p.substr(0,20)), endereco(e), porta(port), ativo(true) {}

std::string Medidor::getNome() const { return nome; }
int Medidor::getId() const { return id; }
bool Medidor::getAtivo() const { return ativo; }

void Medidor::setUltimaColeta(DataHora uc) { ultimaColeta = uc; }
void Medidor::setAtivo(bool a) { ativo = a; }

void Medidor::exibir() const {
    std::cout << "Nome: " << nome << "\n";
    std::cout << "ID: " << id << "\n";
    std::cout << "Ativo: " << (ativo ? "Sim" : "Não") << "\n";
}
