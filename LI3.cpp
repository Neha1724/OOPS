#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the value of n";
	cin>>n;
	
	int sum=0; 
	int squareSum=0;
	
	sum=n*(n+1)/2;
	
	int ss=n*(2*n+1)*(n+1);
	squareSum=ss/6;
	
	cout<<"\nthe sum is "<<sum;
	cout<<"\nthe sum of Squares is "<<squareSum;
}
