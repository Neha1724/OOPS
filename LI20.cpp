#include <iostream>
#include <cstring> 
using namespace std;


void Xstrcat(char* str1, char* str2) {
    int i = 0, j = 0;
    char temp[70];

    while (str1[i] != '\0') {
        temp[j++] = str1[i++];
    }
    
    i = 0;
    while (str2[i] != '\0') {
        temp[j++] = str2[i++];
    }
    temp[j] = '\0';
    
    int k=0;
    i=0;
    
    while(temp[k]!='\0'){
    	str2[i++]=temp[k++];
	}
}

int main() {
    char str1[20] = "Hello, ";
    char str2[60] = "world!";

    Xstrcat(str1, str2);

    cout<<str2<<endl;

    return 0;
}

