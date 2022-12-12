/*Implement a C++ program to demonstrate
 and understand Diamond problem.*/
#include <iostream>
 
using namespace std;
 
class Base{
   public:
   Base(){
       cout<<"Base called\n";
   }
};
class A: virtual public Base{
   public:
   A(){
       cout<<"A called\n";
   }
};
class B: virtual public Base{
   public:
   B(){
       cout<<"B called\n";
   }
};
class Derived: public A, public B{
   public:
   Derived(){
       cout<<"derived called\n";
   }
};
int main(){
   Derived d;
   return 0;
}


