#include<iostream>
using namespace std;

int main(){
	int f=1;
	int n, arr[n];
	
	cout<<"enter the value of n";
	cin>>n;
	
	int i=n;
	
    while(i!=0){
    	f=f*i;
    	i--;
	}
	
	cout<<"the factorial is "<<f;
}
