#ifndef MEDICIONEBASE_HPP
#define MEDICIONEBASE_HPP 

#include <iostream>
#include <memory>
using namespace std;

#include "imediciones.hpp"

class MedicionBase: public IMediciones {
protected:
    unique_ptr<float> tiempoMedicion; // t

public: 
    MedicionBase(float t);
    float getTiempo() const;
    void serializar(ofstream& out) const override;
    void deserializar(ifstream& in) override;
    virtual void imprimir() const = 0;
    virtual ~MedicionBase() = default;
};

#endif