#include "mediciones.hpp"

// ========= Presion =========

Presion::Presion(float p, float q, float t): MedicionBase(t), presionEstatica(p), presionDinamica(q) {}
Presion::Presion(const Presion& other): MedicionBase(other.getTiempo()), presionEstatica(other.presionEstatica), presionDinamica(other.presionDinamica) {}

void Presion::imprimir() const {
    cout << "====== Presion ======" << endl;
    cout << "Presión Estática: " << presionEstatica << "\nDinámica: " << presionDinamica << "\nTiempo: " << getTiempo() << endl;
}

void Posicion::serializar(ofstream& out) const {
    MedicionBase::serializar(out);
    out.write(reinterpret_cast<const char*>(&latitud), sizeof(float));
    out.write(reinterpret_cast<const char*>(&longitud), sizeof(float));
    out.write(reinterpret_cast<const char*>(&altitud), sizeof(float));
}

void Posicion::deserializar(ifstream& in) {
    MedicionBase::deserializar(in);
    in.read(reinterpret_cast<char*>(&latitud), sizeof(float));
    in.read(reinterpret_cast<char*>(&longitud), sizeof(float));
    in.read(reinterpret_cast<char*>(&altitud), sizeof(float));
}
    
// ========= Posicion =========

Posicion::Posicion(float lat, float lon, float alt, float t): MedicionBase(t), latitud(lat), longitud(lon), altitud(alt) {}
Posicion::Posicion(const Posicion& other): MedicionBase(other.getTiempo()), latitud(other.latitud), longitud(other.longitud), altitud(other.altitud) {}

void Posicion::imprimir() const {
    cout << "====== Posicion ======" << endl;
    cout << "Latitud: " << latitud << "\nLongitud: " << longitud << "\nAltitud: " << altitud << "\nTiempo: " << getTiempo() << endl;
}

void Presion::serializar(ofstream& out) const {
    MedicionBase::serializar(out);
    out.write(reinterpret_cast<const char*>(&presionEstatica), sizeof(float));
    out.write(reinterpret_cast<const char*>(&presionDinamica), sizeof(float));
}

void Presion::deserializar(ifstream& in) {
    MedicionBase::deserializar(in);
    in.read(reinterpret_cast<char*>(&presionEstatica), sizeof(float));
    in.read(reinterpret_cast<char*>(&presionDinamica), sizeof(float));
}