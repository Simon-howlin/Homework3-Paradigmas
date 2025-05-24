#include "flightData.hpp"
#include <fstream>

int main() {
    // Crear los objetos según la consigna
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f);
    Presion presion(101.3f, 5.8f, 6.1f);

    // Imprimir individualmente
    posicion.imprimir();
    presion.imprimir();

    // Guardar en SaveFlightData
    SaveFlightData vuelo(posicion, presion);

    // Imprimir el vuelo (usa los imprimir de Posicion y Presion)
    vuelo.imprimir();

    // Serializar en archivo
    ofstream out("vuelo.dat", ios::binary);
    vuelo.serializar(out);
    out.close();

    // Deserializar en otro objeto
    SaveFlightData vuelo2(posicion, presion);  // construimos con copia válida
    ifstream in("vuelo.dat", ios::binary);
    vuelo2.deserializar(in);
    in.close();

    // Mostrar para comprobar que los datos fueron restaurados
    cout << "\n=== Datos deserializados ===\n";
    vuelo2.imprimir();

    return 0;
}