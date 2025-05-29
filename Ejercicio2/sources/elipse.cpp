#include "../headers/elipse.hpp"

Elipse::Elipse(Punto xy, float a, float b): posCentro(xy), semiEjeMayor(a), semiEjeMenor(b) {}

void Elipse::setPosCentro(Punto xy) {posCentro = xy;}

void Elipse::setSemiEjeMayor(float a) {semiEjeMayor = a;}

void Elipse::setSemiEjeMenor(float b) {semiEjeMenor = b;}

Punto Elipse::getPosCentro() const {return posCentro;}

float Elipse::getSemiEjeMayor() const {return semiEjeMayor;}

float   Elipse::getSemiEjeMenor() const {return semiEjeMenor;}
