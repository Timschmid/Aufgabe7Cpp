//
// Created by timsc on 03.01.2021.
//

#include "Worker.h"


Worker::Worker(int id, std::string lastName, std::string firstname, double hourlyRate, double hoursWorked) : Employee(id, lastName, firstname), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}

double Worker::getHourlyRate() const {
    return hourlyRate;
}

double Worker::getHoursWorked() const {
    return hoursWorked;
}

double Worker::slary() {
   return hourlyRate*hoursWorked;
}
