#include<iostream>
using namespace std;
int main(){

    int sum=0,n,arr[n];
    cout<<"enter the value of n";
    cin>>n;
    cout<<"enter n natural numbers";
    
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    for(int i=1;i<=n;i++){
        sum=sum+arr[i];
    }
    cout<<"the sum is"<<sum;
}
