#pragma once
#include "Person.h"

class Employee :public Person {
protected:
	double salary;

public:
	Employee();
	Employee(int id, string name, string password, double salary);

	double getSalary();
	void setSalary(double salary);
	void displayInfo();
};