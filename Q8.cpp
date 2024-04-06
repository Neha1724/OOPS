#include <iostream>
using namespace std;

const float PI = 3.14159;


float area(float rad) {
    return PI * rad * rad;
}


float area(float length, float width) {
    return length * width;
}

int main() {
    
    cout << "Area of the circle: " << area(9) << endl;

    cout << "\nArea of the rectangle: " << area(10, 21) << endl;

    return 0;
}
