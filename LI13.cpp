#include<iostream>
using namespace std;

int main()
{
	int n, a[n];
	
	
	cout<<"enter the value of n";
	cin>>n;
	
	cout<<"enter n numbers";
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int max=a[0];
	int min=a[0];
	
	for(int i=0;i<n;i++){
		if(a[i]>=max)
		max=a[i];
		
		if(a[i]<=min)
		min=a[i];
	}
	
	cout<<"max="<<max;
	cout<<"min="<<min;
}
