#ifndef MEDIDOR_H
#define MEDIDOR_H

#include <string>
#include "DataHora.h"

class Medidor {
private:
    std::string nome;
    int id;
    std::string tipo;
    std::string numeroSerie;
    std::string funcao;
    DataHora ultimaColeta;
    std::string ponto;
    std::string endereco;
    int porta;
    bool ativo;

public:
    Medidor(std::string n, int i, std::string t, std::string ns, std::string f,
            DataHora uc, std::string p, std::string e, int port);

    std::string getNome() const;
    int getId() const;
    bool getAtivo() const;

    void setUltimaColeta(DataHora uc);
    void setAtivo(bool a);
    void exibir() const;
};

#endif
