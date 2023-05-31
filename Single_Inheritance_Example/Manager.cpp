#include<iostream>
#include<string>
#include "Manager.h"


Manager::Manager(std::string name, int salary, std::string department) : Employee(name, salary), department(department) {};
void Manager::displayDetails(){
        std::cout << "Name: " << name << std::endl;
        std::cout << "Salary: " << salary << std::endl;
        std::cout << "Department: " << department << std::endl;
    }
