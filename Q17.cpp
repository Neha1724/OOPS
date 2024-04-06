#include<iostream>
using namespace std;

class Circle{

    public:
       int rad;

       void get_radius(){
        cout<<"enter radius";
        cin>>rad;
       }
       float area(){
        return 3.14*rad*rad;
       }
};

int main(){

    Circle C1;

    C1.get_radius();
    cout<<"area = " <<C1.area();

}