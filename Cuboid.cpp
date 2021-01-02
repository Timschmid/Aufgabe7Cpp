//
// Created by timsc on 02.01.2021.
//

#include "Cuboid.h"

double Cuboid::circumference() {
    return (getLength() * getWidth()) * 6.0;
}

double Cuboid::area() {
    return  getLength() * getWidth() * getHeight();
}

Cuboid::Cuboid(double width, double length, double height) : Rectangle(width, length), height(height){}

double Cuboid::getHeight() {
    return height;
}
