#include<iostream>
using namespace std;

int main(){
	
	int a[2][2];
	
	cout<<"enter nums of A";
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<2;i++){
		cout<<"\n";
		for(int j=0;j<2;j++)
		{
			cout<<" "<<a[j][i];
		}
	}
	
	
	
}
