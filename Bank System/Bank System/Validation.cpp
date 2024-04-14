#include "Validation.h"

bool Validation::checkName(string name) {
    if (name.size() >= 5 && name.size() <= 20)
        return true;
    else
        return false;
}

bool Validation::checkPassword(string password) {
    if (password.size() >= 8 && password.size() <= 20) {
        return true;
    }
    else {
        return false;
    }
}

bool Validation::checkBalance(double balance) {
    if (balance >= 1500) {
        return true;
    }
    else {
        return false;
    }
}

bool Validation::checkSalary(double salary) {
    if (salary >= 5000) {
        return true;
    }
    else {
        return false;
    }
}