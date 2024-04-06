#include<iostream>
using namespace std;

class BOOK{

    private:
      int BOOK_NO;
      char BOOK_TITLE[20];
      float PRICE;

    public:

      float TOTAL_COST(int N){
        int total=PRICE*N;
        return total;
      }

      void input(){

        cout<<"enter book no";
        cin>>BOOK_NO;

        cout<<"enter book title";
        cin>>BOOK_TITLE;

        cout<<"enter book price";
        cin>>PRICE;

      }

      void PURCHASE(){
        
        int n;
        cout<<"enter the number of copies";
        cin>>n;
        float cost = TOTAL_COST(n);

        cout<<"the total cost is : "<<cost;
      }
};

int main(){
   
   BOOK b1;
   b1.input();
   b1.PURCHASE(); 
}