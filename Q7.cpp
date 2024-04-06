#include<iostream>
using namespace std;

int sum(int a,int b,int c=0,int d=0){

    int sum=a+b+c+d;
    return sum;

}

int main(){

    cout<<"\n"<<sum(1,2);
    cout<<"\n"<<sum(1,2,3);
    cout<<"\n"<<sum(1,2,3,4);
}