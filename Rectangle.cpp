//
// Created by timsc on 02.01.2021.
//

#include "Rectangle.h"

Rectangle::Rectangle(double width, double length) : width(width), length(length){

}

double Rectangle::getWidth() {
    return width;
}

double Rectangle::getLength() {
    return length;
}

double Rectangle::circumference() {
    return (2.0*getWidth()) + (2.0 * getLength());
}

double Rectangle::area() {
    return getWidth() * getLength();
}
