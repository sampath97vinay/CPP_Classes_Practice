#pragma once

#include<string>
#include "Employee.h"

class Manager : public Employee {
private:
    std::string department{};
public:
    Manager(std::string name, int salary, std::string department);
    void displayDetails() override;

};
