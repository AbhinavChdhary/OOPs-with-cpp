/*3.Create a base class called CAL_AREA(Abstract). Use this 
class to store float type values that could be used to compute
the volume of figures. Derive two specific classes called cone,
hemisphere  and cylinder from the base CAL_AREA. Add to the base
class, a member function getdata ( ) to initialize base class
data members and another member function display volume( ) to 
compute and display the volume of figures. Make display 
volume ( ) as a pure virtual function and redefine this function in
the derived classes to suit their requirements. Using these three
 classes, design a program that will accept dimensions of a cone,
  cylinder and hemisphere interactively and display the volumes. 
  Remember values given as input will be and used as follows:
Volume of cone = (1/3)πr2h
Volume of hemisphere = (2/3)πr3 
Volume of cylinder = πr2h
*/
#include<iostream>
using namespace std;

class Cal_area{
    public:
    int h,r;
    void getdata(int a,int b=0){
        h=b;
        r=a;
    }
    virtual void displayvol()=0;
};
class Cone:public Cal_area{
    public:
    void displayvol(){
        float x=3.14*r*r*h*0.33;
        cout<<"Volume of cone="<<x<<endl;
    }
};
class Hem:public Cal_area{
    public:
    void displayvol(){
        float x=3.14*r*r*r*0.66;
        cout<<"Volume of hem="<<x<<endl;}
    };
class Cylinder:public Cal_area{
    public:
        void displayvol(){
        float x=3.14*r*r*h;
        cout<<"Volume of cylinder="<<x<<endl;
}
};
int main(){
    Cal_area *ptr1,*ptr2,*ptr3;
    Cylinder obj1;
    Cone obj2;
    Hem obj3;
    ptr1=&obj1;
    ptr2=&obj2;
    ptr3=&obj3;
    ptr1->getdata(4,3);
    ptr2->getdata(4,3);
    ptr3->getdata(4);
    ptr1->displayvol();
    ptr2->displayvol();
    ptr3->displayvol();
return 0;
}