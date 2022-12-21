// Abhinav Choudhary B.tech CST (49)
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
   cout << "INPUT/OUTPUT\nAbhinav Choudhary\nB.tech CST 49\n";
   Celcius celcius;
   Fahrenheit fahrenheit;
   Temperature *pc=&celcius, *pf=&fahrenheit;
   pc->setTempData(0.0);
   pc->changetemp();
   pf->setTempData(0.0);
   pf->changetemp();
   return 0;
}