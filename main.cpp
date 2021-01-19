#include <iostream>
#include <array>
#include <memory>
#include "Employee.h"
#include "Worker.h"
#include "Seller.h"

int main() {

    std::shared_ptr<Employee> employee(std::make_shared<Worker>(43, "Davis", "Trucker", 96, 400));
    std::shared_ptr<Worker> worker(std::make_shared<Worker>(4, "Duck", "Tick", 9, 40));
    employee = worker;
    std::cout << employee->salary()<<std::endl;
    std::shared_ptr<Seller> seller(std::make_shared<Seller>(5, "Duck", "Trick", 1000, 2000));
    employee = seller;
    std::cout << employee->salary() << std::endl;

}

