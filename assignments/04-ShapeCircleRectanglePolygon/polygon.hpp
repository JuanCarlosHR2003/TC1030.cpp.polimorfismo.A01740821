#pragma once
#include "Shape.hpp"

class polygon: public Shape
{
private:
    int numLados;
    int lado;
    int apotema;
public:
    polygon();
    polygon(int, int, int, int, int);
    std::string draw() override;
};