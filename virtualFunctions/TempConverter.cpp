/*1. Write a C++ program to implement pure virtual function with
 following details:
 Create  A Base Class        Temperature
Data members:
Float temp;
Function members
void setTempData(float)
virtual void changetemp()
Sub Class Fahrenheit      (subclass of Temperature)
Data members:
Float ctemp;
Function members
Override function changetemp() to convert Fahrenheit temperature
 into degree Celsius by using formula C=5/9*(F-32) and display
  converted temperature
Sub Class Celsius                  (subclass of Temperature)
Data members:
Float  ftemp;
Function members
Override function changetemp() to convert degree Celsius into
Fahrenheit temperature  by using  formula F=9/5*c+32 and display
converted temperature
*/
#include <iostream>
 
using namespace std;
 
class Temperature{
   public:
   float temp = 0.0f;
   void setTempData(float t){
       temp = t;
   }
   virtual void changetemp() = 0;
};
class Fahrenheit: public Temperature{
   public:
   float ctemp = 0.0f;
   void changetemp(){
       ctemp = (temp-32.0)*(5.0/9.0);
       cout<<"in celcius: "<<ctemp<<endl;
   }
};
class Celcius: public Temperature{
   public:
   float ftemp = 0.0f;
   void changetemp(){
       ftemp = temp*(9.0/5.0)+32.0;
       cout<<"in fahrenheit: "<<ftemp<<endl;
   }
};
int main(){
   Celcius celcius;
   Fahrenheit fahrenheit;
   Temperature *pc=&celcius, *pf=&fahrenheit;
   pc->setTempData(0.0);
   pc->changetemp();

   pf->setTempData(0.0);
   pf->changetemp();

   return 0;
}
