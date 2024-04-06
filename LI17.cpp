#include <iostream>
using namespace std;

void copyArray(int *src, int *dest, int size) {
    for (int i = 0; i < size; ++i) {
        *(dest+ i) = *(src+ i);
    }
}

int main() {
    int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};
    int dest[SIZE];

    copyArray(arr, dest, SIZE);
    
    for (int i = 0; i < SIZE; ++i) {
     cout << dest[i] << " ";
    }

    return 0;
}

