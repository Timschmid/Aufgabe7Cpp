#include <iostream>
#include "Rectangle.h"
#include "Cuboid.h"
int main() {

    Rectangle r(12,12);

    std::cout << "R width: " << r.getWidth() << " R length: " << r.getLength() << std::endl;
    std::cout << "R umfang: " << r.circumference() << std::endl;
    std::cout << "R Flaeche: " << r.area() << std::endl;

    std::cout << std::endl;

    Cuboid c(4,4, 5);

    std::cout << "R width: " << c.getWidth() << " R length: " << c.getLength() << "R Height: " << c.getHeight() <<std::endl;
    std::cout << "R Mantell-Umfang: " << c.circumference() << std::endl;
    std::cout << "R Volumen: " << c.area() << std::endl;

}
