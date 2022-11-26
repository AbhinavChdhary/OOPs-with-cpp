#include <iostream>
using namespace std;
 
int main(){
    int c;
    cout<<"enter your choice\n";
    cout<<"1 for area of circle\n";
    cout<<"2 for area of rectangle\n";
    cout<<"3 for area of triangle\n";
    cout<<"enter your choice\n";
    cin>>c;
 
    switch (c)
    {
    case 1:
        float r, area;
        cin>>r;
        area = 3.14*r*r;
        cout<<"area of circle= "<<area;
        break;
    case 2:
        float l,b;
        cin>>l>>b;
        area = l*b;
        cout<<"area of rectangle= "<<area;
        break;
    case 3:
        float h;
        cin>>b>>h;
        area = 0.5*h*b;
        cout<<"area of triangle= "<<area;
        break;
    default:
        cout<<”wrong choice”;
    }
    return 0;
}

