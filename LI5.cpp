#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter n";
	cin>>n;
	
	int sum=0,prod =1;
	
	while(n!=0)
	{
		sum=sum+ (n%10);
		prod=prod*(n%10);
		
		n=n/10;
	}
	cout<<"the sum is "<<sum;
	cout<<"the product is "<<prod;
	
}
