#include "polygon.hpp"

polygon::polygon()
{
    numLados = 0;
    apotema = 0;
    lado = 0;
}

polygon::polygon(int valX, int valY, int valn, int valA, int valL): Shape{valX,valY}
{
    numLados = valn;
    apotema = valA;
    lado = valL;
}

std::string polygon::draw(){
    return "soy un polígono";
}