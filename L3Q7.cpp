#include<iostream>
using namespace std;

class complex {
private:
    float re;
    float img;
    static int count;

public:
    complex() {
        cout << "Object created";
        count++;
    }

    complex(float re, float img) {
        this->re = re;
        this->img = img;
        count++;
    }

    complex(float re) {
        this->re = re;
        this->img = 0;
        count++;
    }

    void display() {
        cout << "\n" << re << " + i" << img;
    }

    friend complex operator +(complex c1, complex c2);
    friend complex operator *(complex c1, complex c2);
    friend complex operator -(complex c1, complex c2);

    static int getCount() {
        return count;
    }

    static void resetCount() {
        count = 0;
    }

    static complex addArray(complex c[], int size) {
        complex result(0, 0);
        for (int i = 0; i < size; i++) {
            result.re += c[i].re;
            result.img += c[i].img;
        }
        return result;
    }
};

int complex::count = 0;

complex operator +(complex c1, complex c2) {
    complex c3;
    c3.re = c1.re + c2.re;
    c3.img = c1.img + c2.img;
    return c3;
}

complex operator *(complex c1, complex c2) {
    complex c3;
    c3.re = c1.re * c2.re - c1.img * c2.img;
    c3.img = c1.re * c2.img + c2.re * c1.img;
    return c3;
}

complex operator -(complex c1, complex c2) {
    complex c3;
    c3.re = c1.re - c2.re;
    c3.img = c1.img - c2.img;
    return c3;
}

int main() {
    complex c1(3.5, 9.0);
    complex c2(8);
    complex c3 = c1 + c2;
    complex c4 = c1 * c2;
    complex c5 = c1 - c2;

    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();

    complex cArray[] = {complex(1, 2), complex(3, 4), complex(5, 6)};
    complex result = complex::addArray(cArray, 3);
    result.display();

    cout << "\nTotal objects created: " << complex::getCount() << endl;

    return 0;
}

