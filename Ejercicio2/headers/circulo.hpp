#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include <iostream>
using namespace std;

#include "punto.hpp"

class Circulo {
private:
    Punto pos; // p
    float radio; // r

public:
    Circulo(Punto p, float r);
    ~Circulo() = default;

    void setPos(Punto p);
    void setRadio(float r);
    Punto getPos() const;
    float getRadio() const;
};

#endif