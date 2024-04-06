#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string name, int age) : name(name), age(age) {}

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class BankUser : public Person {
protected:
    int customerId;

public:
    BankUser(string name, int age, int customerId) : Person(name, age), customerId(customerId) {}

    void displayBankUserDetails() {
        displayPersonDetails(); 
        cout << "Customer ID: " << customerId << endl;
    }
};

class Account {
protected:
    float balance;

public:
    Account(float balance) : balance(balance) {}

    void displayAccountBalance() {
        cout << "Account Balance:" << balance << endl;
    }
};

class Savings : public BankUser, public Account {
public:
    Savings(string name, int age, int customerId, float balance)
            : BankUser(name, age, customerId), Account(balance) {}

    void displaySavingsDetails() {
        displayBankUserDetails(); 
        displayAccountBalance();  
    }
};

int main() {
    Savings savings("XYZ", 30, 123456, 5000.50);
    savings.displaySavingsDetails();
    return 0;
}

