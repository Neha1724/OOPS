#include <iostream>
using namespace std;


void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<","<<b;
}


void swapByReference(int &a, int &b) {
    int temp = *a;
    *a = *b;
    *b = temp;

        cout<<a<<","<<b;

    
}

int main() {
    int num1=1,num2=2;

    swapByValue(num1,num2);
    //cout << "After swapping by call by value: " << num1 << " " << num2 << endl;

    swapByValue(num1,num2);

    swapByReference(&num1,&num2);
   // cout << "After swapping by call by reference: " << num1 << " " << num2 << endl;

    return 0;
}
