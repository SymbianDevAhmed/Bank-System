#include "Person.h"

Person::Person(): id(0) {}
Person::Person(int id, string name, string password) {
    this->id = id;
    this->name = name;

    if (Validation::checkName(name)) {
        this->name = name;
    }
    else {
        cout << "ERROR : Name should be between 5 an 20 character" << endl;
    }

    if (Validation::checkPassword(password)) {
        this->password = password;
    }
    else {
        cout << "ERROR : Password should be between 8 an 20 character" << endl;
    }
}

void Person::setId(int id) {
    this->id = id;
}

void Person::setName(string name) {
    if (Validation::checkName(name)) {
        this->name = name;
    }
    else {
        cout << "ERROR : Name should be between 5 an 20 character" << endl;
    }
}

void Person::setPassword(string password) {
    if (Validation::checkPassword(password)) {
        this->password = password;
    }
    else {
        cout << "ERROR : Password should be between 8 an 20 character" << endl;
    }
}

int Person::getId() {
    return this->id;
}
string Person::getName() {
    return name;
}
string Person::getPassword() {
    return this->password;
}