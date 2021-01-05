//
// Created by timsc on 02.01.2021.
//

#ifndef AUFGABE6_RECTANGLE_H
#define AUFGABE6_RECTANGLE_H


#include "InterFace.h"

class Rectangle : public InterFace{
private:
    double length, width;
public:
    Rectangle(double  width, double length);
    double getLength() override;
    double getWidth() override;
    virtual double circumference();
    virtual double area();

};


#endif //AUFGABE6_RECTANGLE_H
