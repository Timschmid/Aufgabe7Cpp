#include <iostream>
#include <array>
#include "Guest.h"
#include "Employee.h"
#include "Worker.h"
#include "Seller.h"

int main() {
    auto employee = new Employee(4, "Duck", "Tick");
    std::cout << employee->salary()<<std::endl;
    auto worker = new Worker(4, "Duck", "Tick", 9, 40);
    employee = worker;
    std::cout << employee->salary()<<std::endl;
    auto seller = new Seller(5, "Duck", "Trick", 1000, 2000);
    employee = seller;
    std::cout << employee->salary() << std::endl;
}

