#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14159;

float perimeter(float rad) {
    return 2 * PI * rad;
}

float perimeter(float l, float b) {
    return 2 * (l + b);
}

float perimeter(float s1, float s2, float s3) {
    return s1 + s2 + s3;
}

int main() {
    
    cout<<"\nperimeter of circle = "<<perimeter(3.5);
    cout<<"\nperimeter of rectangle = "<<perimeter(2.3,4.5);
    cout<<"\nperimeter of triangle = "<<perimeter(4,5,3);

    return 0;
}
