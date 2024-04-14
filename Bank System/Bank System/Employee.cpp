#include "Employee.h"

Employee::Employee() {}
Employee::Employee(int id, string name, string password, double salary) :Person(id, name, password) {
    if (Validation::checkSalary(salary)) {
        this->salary = salary;
    }
    else {
        cout << "ERROR : Salary should be started from $5000\n" << endl;
    }
}

double Employee::getSalary() {
    return salary;
}

void Employee::setSalary(double salary) {
    if (Validation::checkSalary(salary)) {
        this->salary = salary;
    }
    else {
        cout << "ERROR : Salary should be started from $5000\n" << endl;
    }
}

void Employee::displayInfo() {
    cout << "Employee Information" << endl;
    cout << "ID: " << getId() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Salary: $" << getSalary() << endl;
}