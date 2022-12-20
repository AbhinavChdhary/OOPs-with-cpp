// Abhinav Choudhary B.tech CST (49)
#include <bits/stdc++.h>

using namespace std;

class TollBooth
{
    int cars;
    double amt;

public:
    TollBooth()
    {
        cars = 0;
        amt = 0.0f;
    }
    void payingCar()
    {
        cars++;
        amt += 0.5;
    }
    void nonPayCar()
    {
        cars++;
    }
    void display()
    {
        cout << "----------x----------" << endl;
        cout << "cars: " << cars << endl;
        cout << "amount: " << amt << endl;
    }
};

int main()
{
    cout << "INPUT/OUTPUT\nAbhinav Choudhary\nB.tech CST 49\n";
    TollBooth newDay;
    cout << "Enter y for paying car\n";
    cout << "Enter n for non paying car\n";
    cout << "Enter E for End and print\n";

    char ch;
    while (cin >> ch)
    {
        if (ch == 'y')
            newDay.payingCar();
        else if (ch == 'n')
            newDay.nonPayCar();
        else if (ch == 'E')
        {
            newDay.display();
            break;
        }
        else
            cout << "INVALID input\n";
    }

    return 0;
}