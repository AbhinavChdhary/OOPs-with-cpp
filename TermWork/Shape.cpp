#include <iostream>
using namespace std;
class Shape{
   public:
   double a, b;
   void get_data(){
    cout<<"Enter 2 values: ";
    cin>>a>>b;
   }
   virtual void display_area(){}
};
class  Triangle: public Shape{
   public:
   void display_area(){
    cout<<"area of triangle: "<<0.5*a*b<<endl;
   }
};
class  Rectangle: public Shape{
   public:
   void display_area(){
    cout<<"area of rectangle: "<<a*b<<endl;
   }
};
int main()
{
   cout << "INPUT/OUTPUT\nAbhinav Choudhary\nB.tech CST 49\n";
   Triangle triangle;
   Rectangle rectangle;
   Shape *p=&triangle;
   p->get_data();
   p->display_area();
  
   p = &rectangle;
   p->get_data();
   p->display_area();
   return 0;
}