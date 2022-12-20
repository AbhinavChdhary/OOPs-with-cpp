// Abhinav Choudhary B.tech CST (49)
//With Friend
#include <iostream>

using namespace std;
class Complex
{
private:
    int real, img;

public:
    void getdata()
    {
        cout << "Enter the real part of complex number:";
        cin >> real;
        cout << "Enter the img part of complex number:";
        cin >> img;
    }
    friend Complex operator+(Complex &ob1, Complex &ob2);

    void display()
    {
        cout << "Sum of two complex number=" << real << "+" << img << "i";
    }
};
Complex operator+(Complex &ob1, Complex &ob2){
    Complex ob;
    ob.real = ob1.real + ob2.real;
    ob.img = ob1.img + ob2.img;
    return ob;
}

int main()
{
    cout << "INPUT/OUTPUT\nAbhinav Choudhary\nB.tech CST 49\n";
    Complex A, B, C;
    A.getdata();
    B.getdata();
    C = A + B;
    C.display();

    return 0;
}