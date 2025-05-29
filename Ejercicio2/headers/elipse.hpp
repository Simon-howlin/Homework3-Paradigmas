#ifndef ELIPSE_HPP
#define ELIPSE_HPP

#include <iostream>
using namespace std;

#include "punto.hpp"

class Elipse {
private:
    Punto posCentro; // xy
    float semiEjeMayor; // a
    float semiEjeMenor; // b

public:
    Elipse(Punto xy, float a, float b);
    ~Elipse() = default;

    void setPosCentro(Punto xy);
    void setSemiEjeMayor(float a);
    void setSemiEjeMenor(float b);

    Punto getPosCentro() const;
    float getSemiEjeMayor() const;
    float getSemiEjeMenor() const;
};

#endif