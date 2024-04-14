#pragma once
#include<iostream>
using namespace std;

class Validation {
public:
	static bool checkName(string name);
	static bool checkPassword(string password);
	static bool checkBalance(double balance);
	static bool checkSalary(double salary);
};
