#ifndef PUNTO_HPP
#define PUNTO_HPP

#include <iostream>
using namespace std;

class Punto {
private:
    float posX;
    float posY;

public:
    Punto(float x, float y);
    ~Punto() = default;

    void setX(float x);
    void setY(float y);
    float getX() const;
    float getY() const;
};

#endif