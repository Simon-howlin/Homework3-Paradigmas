#include <iostream>
#include "../headers/procesadorFigura.hpp"

int main() {
    Punto p(0, 0);
    Circulo c(p, 3.0f);
    Elipse e(p, 5.0f, 2.0f);
    Rectangulo r(p, 4.0f, 6.0f);
    
    ProcesadorFigura<Punto> procesadorPunto;
    ProcesadorFigura<Circulo> procesadorCirculo;
    ProcesadorFigura<Elipse> procesadorElipse;
    ProcesadorFigura<Rectangulo> procesadorRectangulo;

    cout << "\n" << endl; // para que no quede pegado el ./ej2

    procesadorPunto.calcularArea(p);
    procesadorCirculo.calcularArea(c);
    procesadorElipse.calcularArea(e);
    procesadorRectangulo.calcularArea(r);

    cout << "\n" << endl; // para que no quede pegado el rm -rf ej2

    return 0;
}