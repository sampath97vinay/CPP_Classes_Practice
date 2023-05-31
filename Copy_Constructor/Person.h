#pragma once
#include<string>

class Person {

public:
	std::string name{};
	int age{};

	Person(std::string n, int a);

	Person(const Person& other);

	void displayInfo();
};