#include <bits/stdc++.h>
 
using namespace std;
 
class times{
   int hr, min, sec;
   public:
   times(){
       hr=0;
       min=0;
       sec=0;
   }
   times(int h, int m, int s){
       hr=h;
       min=m;
       sec=s;
   }
   void addtimes(times &B, times &C){
       C.sec = (sec +B.sec)%60;
       C.min = min+B.min+(sec +B.sec)/60;
       C.hr = hr+B.hr+C.min/60;
       C.min%=60;
       C.hr %=12;
   }
   void display(){
       cout<<hr<<":"<<min<<":"<<sec<<endl;
   }
};
 
int main(){
   times A(11, 45, 59), B(5, 30, 5), C;
   A.addtimes(B, C);
   C.display();
  
   return 0;
}
