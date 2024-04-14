#pragma once
#include "Validation.h"

class Person {
private:
    int id;
    string name, password;

public:
    Person();
    Person(int id, string name, string password);

    void setId(int id);
    void setName(string name);
    void setPassword(string password);

    int getId();
    string getName();
    string getPassword();

    virtual void displayInfo() = 0;
};