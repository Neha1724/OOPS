#include<iostream>
using namespace std;

static int count =0;

class complex{
	
	public:
		
	float re;
	float img;
	
	complex(){
		"object created";
		count++;
	}
	
	complex(float re,float img){
		this->re=re;
		this->img=img;
		
		count++;
	}
	complex(float re){
		this->re=re;
		this->img=0;
		
		count++;
	}
	
	void display(){
		cout<<"\n"<<re<<" + i"<<img;
	}
	
	friend void add();
	friend void addArray();
	friend void mul();
	friend void sub();
};
	
void add(complex c1, complex c2){
		complex c3;
		c3.re=c1.re+c2.re;
		c3.img=c1.img+c2.img;
		c3.display();
	};
	
void sub(complex c1, complex c2){
	    complex c3;
	    c3.re=c1.re-c2.re;
	    c3.img=c1.re-c2.re;
	    c3.display();
}

void mul(complex c1, complex c2){
	    complex c3;
	    c3.re=c1.re*c2.re - c1.img*c2.img;
	    c3.img=c1.re*c2.img+ c1.img*c2.re;
	    c3.display();;
}

	
void addArray(complex c[],int size){
	int i=0;
	
	complex result(0);
	
	while(i<size){
		result.re+=c[i].re;
		result.img=c[i].img;
		
		++i;
	}
	
	result.display();
	
};


int main(){
	

	complex c1(3.5,9.0);
	complex c2(8);
	complex c3;
	
	cout<<"\n"<<count;
	add(c1,c2);
	mul(c1,c2);
	sub(c1,c2);

	
	
	
	
	
}
