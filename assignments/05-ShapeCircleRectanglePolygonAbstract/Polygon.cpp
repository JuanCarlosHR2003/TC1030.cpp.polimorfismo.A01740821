#include "Polygon.hpp"
#include <string>

Polygon::Polygon(){
    n = 0;
    lado = 0;
    apotema = 0;
}

Polygon::Polygon(int ValX, int ValY, int n, int lado, int a) : Shape{ValX, ValY}{
    this->n = n;
    this->lado = lado;
    this->apotema = a;
}

std::string Polygon::draw(){
    return "soy un polígono";
}

double Polygon::getArea(){
    return (double) n * lado * apotema / 2;
}