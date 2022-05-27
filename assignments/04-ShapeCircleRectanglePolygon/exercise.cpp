#include "Rectangle.hpp"
#include "Shape.hpp"
#include "Circle.hpp"
#include "polygon.hpp"

#include <iostream>

int main() 
{
  Shape* Fig[7];

  Fig[0] = new Circle();
  Fig[1] = new Rectangle();
  Fig[2] = new Rectangle(1,2,5,6);
  Fig[3] = new Circle(4,2,1);
  Fig[4] = new Rectangle();
  Fig[5] = new polygon();
  Fig[6] = new polygon(1,2,5,3,2);

  for(auto i=0; i < 7;i++) {
    Shape* current = Fig[i];

    std::cout << current->draw() << "\n";
  }

// Liberando memoria -------------------

  for (auto i=0; i < 7;i++)
  {
    delete Fig[i];
  }

  return 0;
}
