//
// Created by timsc on 03.01.2021.
//

#include "Employee.h"
#include <iostream>

Employee::Employee(int id, std::string lastName, std::string firstname) : Person(id, lastName, firstname) {

}

double Employee::slary() {
    std::cout << "Employee Salary ";
    return 0;
}
