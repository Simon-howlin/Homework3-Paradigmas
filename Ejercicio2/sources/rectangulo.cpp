#include "../headers/rectangulo.hpp"

Rectangulo::Rectangulo(Punto vIzq, float a, float l): verticeIzqInf(vIzq), ancho(a), largo(l) {}

void Rectangulo::setVerticeIzqInf(Punto vIzq) {verticeIzqInf = vIzq;}

void Rectangulo::setAncho(float a) {ancho = a;}

void Rectangulo::setLargo(float l) {largo = l;}

Punto Rectangulo::getVerticeIzqInf() const {return verticeIzqInf;}

float Rectangulo::getAncho() const {return ancho;}

float Rectangulo::getLargo() const {return largo;}