#include "Admin.h"

Admin::Admin() :Employee() {};
Admin::Admin(int id, string name, string password, double salary) :Employee(id, name, password, salary) {}

void Admin::displayInfo() {
    cout << "Admin Information" << endl;
    cout << "ID: " << getId() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Salary: $" << getSalary() << endl;
}