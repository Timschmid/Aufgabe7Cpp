//
// Created by timsc on 03.01.2021.
//

#ifndef AUFGABE6_EMPLOYEE_H
#define AUFGABE6_EMPLOYEE_H


#include "Person.h"

class Employee : public Person {
public:
    Employee(int id, std::string lastName, std::string firstname);

    virtual double slary () = 0;
};


#endif //AUFGABE6_EMPLOYEE_H
