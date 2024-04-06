#include<iostream>
using namespace std;

class Student{

    int admno;
    char sname[20];
    float math,eng,sci;
    float total;

    float ctotal(){
        this->total=this->eng+this->sci+this->math;
        return this->total;
    }

    public:

    void takedata(){
        cout<<"enter name";
        cin>>sname;

        cout<<"enter rollno";
        cin>>admno;

        cout<<"enter marks in eng sci math resp";
        cin>>eng>>sci>>math;

    }

    void showdata(){
        cout<<"\nname : "<<sname;
        cout<<"\nrollno : "<<admno;
        cout<<"\neng : "<<eng;
        cout<<"\nsci : "<<sci;
        cout<<"\nmath : "<<math;
        cout<<"\ntotal : "<<total;
    }

};

int main(){

    Student s1;
    s1.takedata();
    s1.showdata();

    return 0;
}