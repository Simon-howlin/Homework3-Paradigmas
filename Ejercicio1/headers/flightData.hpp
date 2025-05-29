#ifndef FLIGHTDATA_HPP
#define FLIGHTDATA_HPP

#include <iostream>
using namespace std;

#include "medicionBase.hpp"
#include "mediciones.hpp"

class SaveFlightData: public MedicionBase {
public:
    Posicion posicion; //p
    Presion presion; //q

    SaveFlightData(const Posicion& p, const Presion& q);
    ~SaveFlightData() = default;

    void imprimir() const override;
    void serializar(ofstream& out) const override;
    void deserializar(ifstream& in) override;
};

#endif