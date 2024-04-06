#include<iostream>
using namespace std;

void display(int arr[],int size)
{ cout<<"\n";
	for(int i=0;i<size;i++){
		if(arr[i]!=0){
		cout<<arr[i]<<",";
      } 
	}
};
	
void insert_beg(int arr[],int size,int data){
	
	for(int i=size-1;i>0;i--){
	arr[i]=arr[i-1];
	}
	arr[0]=data;
	
	display(arr,size);
};
	
void insert_end(int arr[],int size,int data){
	
	for(int i=0;i<size-1;i++)
	arr[i]=arr[i+1];
	arr[size-1]=data;
	
	display(arr,size);
};

void insert_pos(int arr[],int size,int pos,int data){

	for(int j=size-1;j>=pos;j--)
	{
		arr[j+1]=arr[j];
	}
	
	arr[pos]=data;
	
	display(arr,size);
	
};
	
void delete_first(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		arr[i]=arr[i+1];
	}
	display(arr,size);
};
	
void delete_last(int arr[],int size){

		for(int i=size-1;i>=0;i--)
	{
		arr[i]=arr[i-1];
		
	}
	display(arr,size);
};
	
void delete_pos(int arr[],int size,int pos){

	for(int j=pos;j<size;j++){
		arr[j]=arr[j+1];
	}
	display(arr,size);
};
	
void del_first_ele(int arr[],int size,int element){

	for(int i=0;i<size;i++)
	{
		if(arr[i]=element){
		
		for(int j=i;j<size;j++)
		{
			arr[j]=arr[j+1];
		}
		 break;
    	}
	}
	display(arr,size);
};
	
void del_last_ele(int arr[],int size,int element){
	
	for(int i=size-1;i>=0;i--)
	{
		if(arr[i]=element){
			for(int j=i;j>=0;j--){
				arr[j]=arr[j-1];
			}
			break;
		}
	}
	display(arr,size);
};

int main(){
	
	
	int arr[50]={1,2,3,4,5,6};
	display(arr,50);
	
	insert_beg(arr,50,12);
	insert_end(arr,50,30);
	insert_pos(arr,50,2,12);
	delete_first(arr,50);
	delete_last(arr,50);
	insert_beg(arr,50,40);
	delete_pos(arr,50,0);
	del_first_ele(arr,50,16);
	del_last_ele(arr,50,10);
	
}
