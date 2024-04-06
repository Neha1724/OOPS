#include <iostream>
#include <string>
using namespace std;


class Animal {
public:
    
    virtual void iCanDo() {
        cout << "animal." << endl;
    }
};

class Reptile : public Animal {
public:
    
    void iCanDo() override {
        cout << "Crawl" << endl;
    }
};


class Mammal : public Animal {
public:
    
    void iCanDo() override {
        cout << "mammal." << endl;
    }
};

class Human : public Mammal {
public:
	
    void iCanDo() override {
        cout << "Talk" << endl;
    }
};


class Whales : public Mammal {
public:
    
    void iCanDo() override {
        cout << "swim." << endl;
    }
};

int main() {
    Animal animal;
    Reptile reptile;
    Mammal mammal;
    Human human;
    Whales whales;

    cout << "Animal: ";
    animal.iCanDo();

    cout << "\nReptile: ";
    reptile.iCanDo(); 

    cout << "\nMammal: ";
    mammal.iCanDo(); 

    cout << "\nHuman: ";
    human.iCanDo();

    cout << "\nWhales: ";
    whales.iCanDo(); 

    return 0;
}

