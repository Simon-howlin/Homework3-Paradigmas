#include "../headers/circulo.hpp"

Circulo::Circulo(Punto p, float r): pos(p), radio(r) {}

void Circulo::setPos(Punto p) {pos = p;}

void Circulo::setRadio(float r) {radio = r;}

Punto Circulo::getPos() const {return pos;}

float Circulo::getRadio() const {return radio;}