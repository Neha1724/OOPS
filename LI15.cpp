#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter n";
	cin>>n;
	
	for(int i=2; i<n;i++)
	{
		if(n%i==0)
		cout<<"\n"<<i<<" is a factor of "<<n;
	}
}
