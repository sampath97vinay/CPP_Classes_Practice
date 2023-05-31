#pragma once
#include<string>

class Employee {

public:
    std::string name{};
    int salary{};

    Employee(std::string name, int salary);

    virtual void displayDetails();

};