#include "../headers/contenedor.hpp"
#include "../headers/constructorJSON.hpp"

int main() {
    Contenedor<double> doubles;
    doubles.agregarElem(1.3);
    doubles.agregarElem(2.1);
    doubles.agregarElem(3.2);

    Contenedor<string> palabras;
    palabras.agregarElem("Hola");
    palabras.agregarElem("Mundo");

    Contenedor<vector<vector<int>>> listas;
    listas.agregarElem({{1, 2}, {3, 4}});

    cout << "\n" << endl; // para que no quede pegado el ./ej3

    ConstructorJSON json;
    json.agregarElem("vec_doubles", doubles.procesar());
    json.agregarElem("palabras", palabras.procesar());
    json.agregarElem("listas", listas.procesar());

    json.imprimirJSON();

    cout << "\n" << endl; // para que no quede pegado el rm -rf ej3
}