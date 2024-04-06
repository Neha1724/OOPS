#include <iostream>
using namespace std;

class Arithmetic {
public:
    virtual int operation(int a, int b) = 0;
};

class Addition : public Arithmetic {
public:
    int operation(int a, int b)  {
        return a + b;
    }
};

class Subtraction : public Arithmetic {
public:
    int operation(int a, int b) {
        return a - b;
    }
};

int main() {
    Arithmetic *arith;
    Addition add;
    Subtraction sub;

    arith = &add;
    cout << "Addition: 10 + 5 = " << arith->operation(10, 5) << endl;

    arith = &sub;
    cout << "Subtraction: 10 - 5 = " << arith->operation(10, 5) << endl;

    return 0;
}

