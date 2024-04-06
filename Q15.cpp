#include<iostream>
using namespace std;

int main(){
    
    int max;

    cout<<"enter no of subjects";
    cin>>max;

    int*ptr=new int[max];

    for(int i=0;i<max;i++){
        cout<<"\nenter marks in subject"<<i+1;
        cin>>*(ptr + i);
    }

    int average=0;

    for(int i=0;i <max; i++){
        average+=*(ptr +i)/max;
    }

    cout<<"\naverage = "<<average;

    delete[] ptr;
    return 0;

}