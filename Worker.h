//
// Created by timsc on 03.01.2021.
//

#ifndef AUFGABE6_WORKER_H
#define AUFGABE6_WORKER_H


#include "Employee.h"

class Worker : public Employee {
private:
    double hourlyRate, hoursWorked;
public:
    double getHourlyRate() const;

    double getHoursWorked() const;

public:
    Worker(int id, std::string lastName, std::string firstname, double hourlyRate, double hoursWorked);
    double slary() override;
};


#endif //AUFGABE6_WORKER_H
