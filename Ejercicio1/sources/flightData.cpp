#include "../headers/flightData.hpp"

SaveFlightData::SaveFlightData(const Posicion& p, const Presion& q)
    : MedicionBase(p.getTiempo()), posicion(p), presion(q) {}

void SaveFlightData::imprimir() const {
    cout << "\n====== Informacion de Vuelo ======\n";
    posicion.imprimir();
    presion.imprimir();
}

void SaveFlightData::serializar(ofstream& out) const {
    posicion.serializar(out);
    presion.serializar(out);
}

void SaveFlightData::deserializar(ifstream& in) {
    posicion.deserializar(in);
    presion.deserializar(in);
}
