#ifndef CONTENEDOR_HPP
#define CONTENEDOR_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

template<typename T>
class Contenedor {
private:
    vector<T> elems;

public:
    void agregarElem(const T& elem) {
        elems.push_back(elem);
    }

    string procesar() const {
        ostringstream out;
        
        if constexpr (is_same_v<T, double>) {
            out << "[";
            for (size_t i = 0; i < elems.size(); ++i) {
                out << elems[i];
                if (i != elems.size() - 1) out << ",";
            }
            out << "]";
        }
        else if constexpr (is_same_v<T, string>) {
            out << "[";
            for (size_t i = 0; i < elems.size(); ++i) {
                out << "\"" << elems[i] << "\"";
                if (i != elems.size() - 1) out << ",";
            }
            out << "]";
        }
        else if constexpr (is_same_v<T, vector<vector<int>>>) {
            out << "[\n";
            for (size_t i = 0; i < elems[0].size(); ++i) {
                out << "          [";
                for (size_t j = 0; j < elems[0][i].size(); ++j) {
                    out << elems[0][i][j];
                    if (j != elems[0][i].size() - 1) out << ",";
                }
                out << "]";
                if (i != elems[0].size() - 1) out << ",\n";
            }
            out << "\n         ]";
        }
        else {
            return "\"tipo no procesado\"";
        }

        return out.str();
    }
};

#endif