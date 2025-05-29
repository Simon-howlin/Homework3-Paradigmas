#ifndef PROCESADORFIGURA_HPP
#define PROCESADORFIGURA_HPP

#include <iostream>
using namespace std;
#define PI 3.141592653 

#include "circulo.hpp"
#include "elipse.hpp"
#include "rectangulo.hpp"

template <typename T>
class ProcesadorFigura {
public:
   void calcularArea(T&) const {
        cout << "Tipo no soportado en ProcesadorFigura o la figura no tiene area." << endl;
   }
};

template <>
class ProcesadorFigura<Circulo> {
public:
    void calcularArea(Circulo& circulo) {
        cout << "Area Circulo: " << PI*circulo.getRadio()*circulo.getRadio() << endl;
    }
};

template <>
class ProcesadorFigura<Elipse> {
public:
    void calcularArea(Elipse& elipse) {
        cout << "Area Elipse: " << PI*elipse.getSemiEjeMayor()*elipse.getSemiEjeMenor() << endl;
    }
};

template<>
class ProcesadorFigura<Rectangulo> {
public:
    void calcularArea(Rectangulo& rectangulo) {
        cout << "Area Rectangulo: " << rectangulo.getAncho()*rectangulo.getLargo() << endl;
    }
};

#endif