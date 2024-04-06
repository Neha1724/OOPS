#include<iostream>
using namespace std;

int main(){
	int p=1;
	int n, arr[n];
	
	cout<<"enter the value of n";
	cin>>n;
	
	cout<<"enter the n numbers";
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
		p=p*arr[i];
	}
	
	cout<<"the product is "<<p;
}
