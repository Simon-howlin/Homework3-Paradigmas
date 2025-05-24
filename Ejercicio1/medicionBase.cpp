#include "medicionBase.hpp"

MedicionBase::MedicionBase(float t): tiempoMedicion(make_unique<float>(t)) {}

float MedicionBase::getTiempo() const {
    return *tiempoMedicion;
}

void MedicionBase::serializar(ofstream& out) const {
    out.write(reinterpret_cast<const char*>(tiempoMedicion.get()), sizeof(float));
}

void MedicionBase::deserializar(ifstream& in) {
    tiempoMedicion = make_unique<float>();
    in.read(reinterpret_cast<char*>(tiempoMedicion.get()), sizeof(float));
}
