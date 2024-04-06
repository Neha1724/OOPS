#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int temp = num % 10;
        reversedNum = reversedNum * 10 + temp;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reversed = reverseNumber(num);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
