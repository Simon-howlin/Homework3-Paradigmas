#ifndef MEDICIONEBASE_HPP
#define MEDICIONEBASE_HPP 

#include <iostream>
#include <memory>
using namespace std;

#include "Imediciones.hpp"

class MedicionBase: public IMediciones {
protected:
    unique_ptr<float> tiempoMedicion; // t

public: 
    MedicionBase(float t);
    virtual ~MedicionBase() = default;

    float getTiempo() const;
    void serializar(ofstream& out) const override;
    void deserializar(ifstream& in) override;
    
    virtual void imprimir() const = 0;
};

#endif