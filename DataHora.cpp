#include "DataHora.h"
#include <ctime>
#include <iomanip>
#include <sstream>

DataHora::DataHora() : dia(0), mes(0), ano(0), hora(0), minuto(0), segundo(0) {}

DataHora::DataHora(int d, int m, int a, int h, int min, int s)
    : dia(d), mes(m), ano(a), hora(h), minuto(min), segundo(s) {}

std::string DataHora::toString() const {
    std::ostringstream oss;
    oss << std::setfill('0') << std::setw(2) << dia << "/"
        << std::setw(2) << mes << "/" << ano << " "
        << std::setw(2) << hora << ":" << std::setw(2) << minuto << ":"
        << std::setw(2) << segundo;
    return oss.str();
}

DataHora DataHora::agora() {
    time_t t = time(nullptr);
    tm* now = localtime(&t);
    return DataHora(now->tm_mday, now->tm_mon + 1, now->tm_year + 1900,
                    now->tm_hour, now->tm_min, now->tm_sec);
}
