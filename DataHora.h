#ifndef DATAHORA_H
#define DATAHORA_H

#include <string>

struct DataHora {
    int dia, mes, ano, hora, minuto, segundo;

    DataHora();
    DataHora(int d, int m, int a, int h, int min, int s);

    std::string toString() const;
    static DataHora agora();
};

#endif
