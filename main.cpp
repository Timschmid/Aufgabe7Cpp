#include <iostream>
#include <array>
#include "Rectangle.h"
#include "Cuboid.h"

class Base {
    int valueB;
public:
    void setValueB(int value);

    int getValueB();
};

void Base::setValueB(int value) {
    this->valueB = value;
}

int Base::getValueB() {
    return valueB;
}

typedef std::array<int, 1> SingleArray;

class Derived : public Base {
    SingleArray *array = new SingleArray();
public:
    void setValueD(int value);

    int getValueD();
};

void Derived::setValueD(int value) {
    (*array)[0] = value;
}

int Derived::getValueD() {
    return (*array)[0];
}


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


    //Cuboid wäre als Basisklasse eher ungeeignet, da Ein Rechteck nur zwei Wete höhe und Länge benötigt, ein Quader hingegen 3.
    //Bei der Vererbung ist es jedoch nicht gut/Möglich inter unterklasse Weniger Atribute als in der Basisklasse zu hanben.
    //Nur Mehr oder gleichviel Attribute als in der Basisklasse sind möglich.

    //Der Typ double ist in diesem Fall geeignet, da somit auch Komma zahlen möglich sind. jedoch sind auch negative zahlen möglich was eher unpraktisch ist.
    //hier könnte es also jeweils immer ein unsignet int für Zahl und nachkommastellen geben was sinvol sein kann. oder die Üperprüfung auf negatice zahlen.

    Base b;
    Base b2;
    Derived d;
    Derived d2;

    d.setValueD(22);
    d2 = d;

    std::cout << d2.getValueD() << " funktioniert " << std::endl;

    //b.setValueB(33);
   // d = b; // wird nicht kompeliert


    d.setValueB(44);
    b = d;

    //Auf B kann zugegriffen werden, da D von b erbt
    std::cout << b.getValueB() << " functioniert" << std::endl;

    b.setValueB(22);
    b2 =b;

    std::cout << b2.getValueB() << "functioniert" << std::endl;


}

