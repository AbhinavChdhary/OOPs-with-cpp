// Abhinav Choudhary B.tech CST (49)
//Without Friend
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
    Complex operator+(Complex &obj)
    {
        Complex obj1;
        obj1.real = real + obj.real;
        obj1.img = img + obj.img;
        return obj1;
    }
    void display()
    {
        cout << "Sum of two complex number=" << real << "+" << img << "i";
    }
};

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