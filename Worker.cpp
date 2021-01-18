//
// Created by timsc on 03.01.2021.
//

#include "Worker.h"
#include <iostream>


Worker::Worker(int id, std::string lastName, std::string firstname, double hourlyRate, double hoursWorked) : Employee(id, lastName, firstname), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}

double Worker::getHourlyRate() const {
    return hourlyRate;
}

double Worker::getHoursWorked() const {
    return hoursWorked;
}

double Worker::salary() {
    std::cout << "Worker Salary ";
   return hourlyRate*hoursWorked;
}
