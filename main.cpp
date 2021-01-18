#include <iostream>
#include <array>
#include "Employee.h"
#include "Worker.h"
#include "Seller.h"

int main() {
    Employee* employee = new Worker(42, "Duck", "Tick", 96, 40);
    auto worker = new Worker(4, "Duck", "Tick", 9, 40);
    employee = worker;
    std::cout << employee->salary()<<std::endl;
    auto seller = new Seller(5, "Duck", "Trick", 1000, 2000);
    employee = seller;
    std::cout << employee->salary() << std::endl;

    std::shared_ptr<Employee> unWorker(new Worker(42, "Duck", "Tick", 960, 40));
    std::cout << unWorker->salary() << std::endl;
}

