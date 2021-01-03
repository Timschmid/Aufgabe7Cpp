//
// Created by timsc on 03.01.2021.
//

#include "Person.h"

int Person::getId() const {
    return id;
}

const std::string &Person::getLastName() const {
    return lastName;
}

const std::string &Person::getFirstName() const {
    return firstName;
}

Person::Person(int id, std::string lastName, std::string firstname) : id(id), lastName(lastName), firstName(firstname) { }
