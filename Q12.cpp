#include <iostream>
#include<string.h>
using namespace std;


int countVowels(char *str) {
    int count = 0;
    while (*str != '\0') {
        char ch = *str;
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
     
    char str[] = "abcDefABcde";

    cout << "Number of vowels in the given string: " << countVowels(str) << endl;

    return 0;
}
