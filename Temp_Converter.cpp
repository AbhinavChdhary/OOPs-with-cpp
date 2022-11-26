//program to convert temp from F* to C* or vice versa as per user choice
#include <iostream>
using namespace std;
 
int main(){
    char c;
    cout<<"enter your choice\n";
    cout<<"F to convert to Fahrenheit\n";
    cout<<"C to convert to Celcius\n";
    cin>>c;
 
    switch (c)
    {
    case 'F':
        float cel;
        cin>>cel;
        cout<<"in Fahrenheit:"<<1.8*cel+32;
        break;
    case 'C':
        float fah;
        cin>>fah;
        cout<<"in Celcius:"<<5/9*(fah-32);
        break;
    default:
        cout<<"wrong choice";
    }
    return 0;
}
