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
    void agregarElem(const string& etiqueta, const string& contenido) {
        elems.push_back({etiqueta, contenido});
    }

    void imprimirJSON() const {
        cout << "{";
        for (size_t i = 0; i < elems.size(); ++i) {
            cout << " \"" << elems[i].first << "\": " << elems[i].second;
            if (i != elems.size() - 1) cout << ",";
            cout << "\n";
        }
        cout << "}\n";
    }
};

#endif