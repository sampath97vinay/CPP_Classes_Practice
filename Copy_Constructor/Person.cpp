#include<iostream>
#include "Person.h"
#include<string>


Person::Person(std::string n, int a) : name{ n }, age{ a }{}
	
Person::Person(const Person &other): name{other.name}, age{other.age}{}

void Person::displayInfo() {
		std::cout << "Name: " << name << std::endl;
		std::cout << "Age: " << age << std::endl;
	}