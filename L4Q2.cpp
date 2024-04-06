#include<iostream>
using namespace std;

class polygon{
	
	public:
   
   virtual float calculateArea(){
   };
 
 };

class triangle : public polygon
{
	int base,height;
	
	public:
	
	triangle(int b, int h){
		this->base=b;
		this->height=h;
	}
	
	float calculateArea(){
		float area=0.5*base*height;
		return area;
	}
};

class rectangle: public polygon
{
	int length,breadth;
	
	public:
	
	
	rectangle(int l,int b){
		this->length=l;
		this->breadth=b;
	}
	
	float calculateArea() {
		float area=length*breadth;
		return area;
		
		
	}
};

int main(){
	
	rectangle r1(10,20);
	float y=r1.calculateArea();
	cout<<"area of rectangle="<<y;
	
	triangle t1(10,20);
	float x=t1.calculateArea();
	cout<<"\narea of triangle="<<x;
	
	
}
