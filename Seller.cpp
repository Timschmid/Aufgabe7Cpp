//
// Created by timsc on 03.01.2021.
//

#include "Seller.h"


double Seller::slary() {
    return pay + commison;
}

double Seller::getPay() const {
    return pay;
}

double Seller::getCommison() const {
    return commison;
}

Seller::Seller(int id, std::string lastName, std::string firstname, double pay, double comission) : Employee(id, lastName, firstname), pay(pay), commison(comission) {}
