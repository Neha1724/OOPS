#include<iostream>
using namespace std; 

void oddDouble(int arr[],int size){

    for(int i=0;i<size;i++)
    {
         if(*(arr + i)%2!=0){
            *(arr +i)=2*(*(arr+i));
         }
    }

}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    oddDouble(arr,size);

    for(int i=0;i<size;i++){
        cout<<"  "<<arr[i];
    }

}