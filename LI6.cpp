#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter a 3 digit number";
	cin>>n;
	
	int num=n;
	int temp=0;
	while(n!=0){
	int a=(n%10)*(n%10)*(n%10);
	temp=temp+a;
	n=n/10;
	}
	
	if(num==temp)
	cout<<"Armstrong";
	
	else
	cout<<"Not armstrong";
	
}
