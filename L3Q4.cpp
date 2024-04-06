#include<iostream>
using namespace std;



class Box{
	
	int length,breadth,height,volume,surface;
//	static int count=0;
	
	public:
		
		Box(){
		
			//count++;
		}
		
		Box(int l,int b,int h){
			
			this->length=l;
			this->breadth=b;
			this->height=h;			
		}
		
		Box(int cubel){
			this->length=cubel;
			this->breadth=cubel;
			this->height=cubel;
		}
		
	/*	int Count(){
			
		   return ++count;
		}*/
		
		int ComputeSA(){
			
			int S=(2*this->length*this->breadth)+(2*this->breadth*this->height)+(2*this->height*this->length);
			return S;
		}
		
		int ComputeVOL(){
			int VOL=length*breadth*height;
			return VOL;
		}
		
		void check(int r){
			int min1=length;
			int min2=length;
			
			if(breadth>length&&breadth>height)
			 {
			  min1=length;
			  min2=height;
		    }
		    
			if(length>height&&length>breadth){
				min1=height;
				min2=breadth;
			}
			
			else{
				min1=length;
				min2=breadth;
			}
			
			float sph_area=4*3.14*r*r;
			float a=min1*min2;
			
			if(sph_area<=a){
				cout<<"\nthe sphere can fit inside the box";
			}
		    
		    else
		        cout<<"\ncan not fit";
		}
};



int main(){
	
	Box b1(2,3,4);
	cout<<"sa="<<b1.ComputeSA();
	cout<<"vol="<<b1.ComputeVOL();
//	b1.Count();
	b1.check(5);
	b1.check(2);
	
	Box b2(3);
//	b2.Count();
	b2.check(2);
	
	return 0;
	
}
