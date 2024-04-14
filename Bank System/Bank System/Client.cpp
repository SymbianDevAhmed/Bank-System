#include "Client.h"

Client::Client() {
	this->balance = 0.0;
}
Client::Client(int id, string name, string password,  double balance) :Person ( id, name, password) {
	if (Validation::checkBalance(balance)) {
		this->balance = balance;
	} 
	else {
		this->balance = 0.0;
		cout << "ERROR : Balance should be started from $1500" << endl;
	}
}

void Client::setBalance(double balance) {
	if (Validation::checkBalance(balance)) {
		this->balance = balance;
	} 
	else {
		this->balance = 0.0;
		cout << "Not Result " << endl;
	}
}

double Client::getBalance() {
	return this->balance;
}

void Client::deposit(double amount) {
	if (amount > 0) {
		this->balance += amount;
	} 
	else {
		cout << "Not Result" << endl;
	}
}

void Client::withdraw(double amount) {
	if (amount <= balance) {
		this->balance -= amount;
	} 
	else {
		cout << "Not Valid" << endl;
	}
}

void Client::transferToAnother(double amount, Client& c) {
	if (amount <= balance) {
		balance -= amount;
		c.deposit(amount);
	}
}
void Client::displayInfo() {
	cout << "Client Information"<< endl;
	cout << "Id: " << getId() << endl;
	cout << "Name: " << getName() << endl;
	cout << "Balance: $" << getBalance() << endl;
}