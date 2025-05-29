#ifndef MEDICIONES_HPP
#define MEDICIONES_HPP 

#include <iostream>
using namespace std;

#include "medicionBase.hpp"

class Presion: public MedicionBase {
public:
    float presionEstatica; // p
    float presionDinamica; // q

    Presion(float p, float q, float t);
    Presion(const Presion& other);
    ~Presion() = default;

    void imprimir() const override;
    void serializar(ofstream& out) const override;
    void deserializar(ifstream& in) override;
};

class Posicion: public MedicionBase {
public:
    float latitud; // lat
    float longitud; // lon
    float altitud;  // alt

    Posicion(float lat, float lon, float alt, float t);
    Posicion(const Posicion& other);
    ~Posicion() = default;
    
    void imprimir() const override;
    void serializar(ofstream& out) const override;
    void deserializar(ifstream& in) override;
};

#endif