#include<iostream>
using namespace std;

int CalcSI(int P , int t=2,int r=5){
    int SI=P*t*r/100;
    return SI;
}

int main(){
    int y=CalcSI(100);
    cout<<"The Simple Interest is"<<y<<endl;

    int x=CalcSI(10000,3);
    cout<<"The Simple Interest is"<<x<<endl;

    return 0;
}