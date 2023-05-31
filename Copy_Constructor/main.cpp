#include<iostream>
#include<string>

#include "Person.h"

int main() {

	Person p1("John", 25);
	std::cout << "Displaying attributes of first object: " << std::endl;
	p1.displayInfo();

	Person p2 = p1;
	p2.name = "Mark";
	p2.age = 30;
	std::cout << "Displaying attributes of second object: " << std::endl;
	p2.displayInfo();

	return 0;

}