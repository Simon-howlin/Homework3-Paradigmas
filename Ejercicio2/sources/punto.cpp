#include "../headers/punto.hpp"

Punto::Punto(float x, float y): posX(x), posY(y) {}

void Punto::setX(float x) {posX = x;}

void Punto::setY(float y) {posY = y;}

float Punto::getX() const {return posX;}

float Punto::getY() const {return posY;}
