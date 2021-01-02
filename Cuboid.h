//
// Created by timsc on 02.01.2021.
//

#ifndef AUFGABE6_CUBOID_H
#define AUFGABE6_CUBOID_H


#include "Rectangle.h"

class Cuboid : public Rectangle{
private:
    double height;
public:
    Cuboid(double  width, double length, double height);
    double getHeight();
    virtual double circumference();
    virtual double area();
};


#endif //AUFGABE6_CUBOID_H
