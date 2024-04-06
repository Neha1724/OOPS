#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter n";
	cin>>n;
	int a,b=0;
	
	int temp=n;
	
	while(temp!=0)
	{
		b=b*10;
		a=temp%10;
		b=b+a;
		temp=temp/10;
		
	}
	
	if(b=temp)
	cout<<"palindrome";
	
	else 
	cout<<"not a palindrome";
	
	
	
}
