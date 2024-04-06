#include<iostream>
using namespace std;

void search(int *arr,int size,int element){
	for(int i=0;i<size;i++){
		if(*(arr+i)=element)
		cout<<"\nelement found at position "<<i;
	}
}

int main(){
	int arr[8]={18,21,23,45,17}
	int size=8;
	
	search(arr,size,45);
	search(arr,size,90);
	
	return 0;
}
