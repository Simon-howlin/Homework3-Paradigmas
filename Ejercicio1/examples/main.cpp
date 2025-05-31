#include "../headers/flightData.hpp"
#include <fstream>

int main() {
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f);
    Presion presion(101.3f, 5.8f, 6.1f);

    cout << "\n" << endl; // para que no quede pegado el ./ej1

    // Imprimir individualmente
    posicion.imprimir();
    presion.imprimir();

    SaveFlightData vuelo(posicion, presion);

    // Imprimir el vuelo (usa los imprimir de Posicion y Presion)
    vuelo.imprimir();

    ofstream out("vuelo.dat", ios::binary);
    vuelo.serializar(out);
    out.close();

    // Deserializar en otro objeto (misma pres y pos)
    SaveFlightData vuelo2(posicion, presion);
    ifstream in("vuelo.dat", ios::binary);
    vuelo2.deserializar(in);
    in.close();

    cout << "\n====== Datos deserializados ======";
    vuelo2.imprimir();

    cout << "\n" << endl; // para que no quede pegado el rm -rf ej1

    return 0;
}