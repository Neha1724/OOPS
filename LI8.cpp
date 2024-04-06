#include<iostream>
using namespace std;

int fib(int n)
{
	
	
	if(n=1)
    {	return 0;}
	
	else if(n=2)
	{
	return 1;
}
	
	else{
		int m=fib(n-1)+fib(n-2);
		return m;
	}
	

	
};

int main(){
	
	int num;
	cout<<"enter the number";
	cin>>num;
	
	for(int i=1;i<=num;i++)
	cout<<fib(i)<<",";
	
//	fibonacci(num);
	
	
	
	
}
