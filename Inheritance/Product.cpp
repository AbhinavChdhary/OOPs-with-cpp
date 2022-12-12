#include <iostream>
 
using namespace std;
 
class Product{
   public:
   string name;
   int code;
   double amount;

   Product(string n, int c, double p){
       name = n;
       code = c;
       amount = p;
   }

   void show(){
       cout<<name<<" "<<code<<endl;
       cout<<"amount: "<<amount<<endl;
   }
};
class Sales: public Product{
   public:
   int day;
   float tax, totamt;
 
   Sales(string n, int c, double p, int d)
       :Product(n, c, p){
       day = d;
   }
   void compute(){
       tax = 0.124*amount;
       totamt = amount+tax;
       if(day>30)
           totamt += 0.025*amount;
   }
   void show(){
       Product::show();
       compute();
       cout<<"days: "<<day<<endl;
       cout<<"total amt: "<<totamt<<endl;       
   }
};
int main(){
   Sales ob("Shampoo", 123, 155, 31);
   ob.show();
   return 0;
}
