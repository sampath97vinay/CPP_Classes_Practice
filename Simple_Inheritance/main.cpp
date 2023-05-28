#include "Employee.h"
#include "Manager.h"
#include<string>


int main()
{
    Employee e1("Robert", 5000);
    Employee e2("Sam", 8000);

    e1.displayDetails();
    e2.displayDetails();

    Manager m("Ben", 15000, "Marketing");
    m.displayDetails();


    return 0;
}