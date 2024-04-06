#include<iostream>
using namespace std ;

int Vcube(int a)
{
    int vol=a*a*a;
    return vol;
};

int Vcuboid(int l,int b,int h){
    int vol=l*b*h;
    return vol;
};

int main(){

    int a;
    cout<<"Enter the lenght of the side of the cube";
    cin>>a;
    cout<<"\nThe volume of the cube is"<<Vcube(a);
    
    int l,b,h;
    cout<<"Enter the lenght, breadth and height of the cuboid";
    cin>>l>>b>>h;
    cout<<"\nThe volume of the cuboid is"<<Vcuboid(l,b,h);

    return 0;
}