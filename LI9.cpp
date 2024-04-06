#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter n";
	cin>>n;
	int flag=0;
	
	int i=0;
	
	while(n>1){
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		 flag=1;
		 break;
    	}
	}
	
	}
	
	if(flag=0)
	cout<<"prime";
	
	else 
	cout<<"not prime";
	
}
