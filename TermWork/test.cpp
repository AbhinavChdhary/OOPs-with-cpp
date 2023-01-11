#include <iostream>
using namespace std;

class A{
    public:
    A(){cout<<"A called\n";}
    ~A(){cout<<"A destroyed\n";}
};
class B: public A{
    public:
    B(){cout<<"B called\n";}
    ~B(){cout<<"B destroyed\n";}
};
class C: public B{
    public:
    C(){cout<<"C called\n";}
    ~C(){cout<<"C destroyed\n";}
};
int main(){
    C ob1;
    cout<<"2\n";
    C ob2;
    
    return 0;
}