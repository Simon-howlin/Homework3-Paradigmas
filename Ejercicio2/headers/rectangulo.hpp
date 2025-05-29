#ifndef RECTANGULO_HPP
#define RECTANGULO_HPP

#include <iostream>
using namespace std;

#include "punto.hpp"

class Rectangulo {
private:
    Punto verticeIzqInf; // vIzq
    float ancho; // a
    float largo; // l

public:
    Rectangulo(Punto vIzq, float a, float l);
    ~Rectangulo() = default;

    void setVerticeIzqInf(Punto vIzq);
    void setAncho(float a);
    void setLargo(float l);

    Punto getVerticeIzqInf() const;
    float getAncho() const;
    float getLargo() const;
};

#endif