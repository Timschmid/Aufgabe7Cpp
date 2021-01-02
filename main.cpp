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


    //Cuboid wäre als Basisklasse eher ungeeignet, da Ein Rechteck nur zwei Wete höhe und Länge benötigt, ein Quader hingegen 3.
    //Bei der Vererbung ist es jedoch nicht gut/Möglich inter unterklasse Weniger Atribute als in der Basisklasse zu hanben.
    //Nur Mehr oder gleichviel Attribute als in der Basisklasse sind möglich.

    //Der Typ double ist in diesem Fall geeignet, da somit auch Komma zahlen möglich sind. jedoch sind auch negative zahlen möglich was eher unpraktisch ist.
    //hier könnte es also jeweils immer ein unsignet int für Zahl und nachkommastellen geben was sinvol sein kann. oder die Üperprüfung auf negatice zahlen.

}
