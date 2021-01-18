//
// Created by timsc on 03.01.2021.
//

#ifndef AUFGABE6_SELLER_H
#define AUFGABE6_SELLER_H


#include "Worker.h"

class Seller : public Employee {
private:
    double pay, commison;
public:
    double getPay() const;

    double getCommison() const;

public:
    Seller(int id, std::string lastName, std::string firstname, double pay, double comission);
    double salary() override;
};


#endif //AUFGABE6_SELLER_H
