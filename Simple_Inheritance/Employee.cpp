#include<iostream>
#include "Employee.h"
#include<string>

Employee::Employee(std::string name, int salary) : name(name), salary(salary) {}

void Employee::displayDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }

