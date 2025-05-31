#ifndef CONSTRUCTORJSON_HPP
#define CONSTRUCTORJSON_HPP

#include <string>
#include <vector>
#include <utility>
#include <iostream>
using namespace std;

class ConstructorJSON {
private:
    vector<pair<string, string>> elems;

public:
    void agregarElem(const string& etiqueta, const string& contenido);
    void imprimirJSON() const;
};

#endif