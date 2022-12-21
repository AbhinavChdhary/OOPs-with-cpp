// Abhinav Choudhary B.tech CST (49)
#include <iostream>
using namespace std;

int main()
{
    cout << "INPUT/OUTPUT\nAbhinav Choudhary\nB.tech CST 49\n";
    cout << "!warning x and y should be equal or equal to 0!\n";
    int R, z, x, y;
    cout << "Enter the value of x=";
    cin >> x;
    cout << "Enter the value of y=";
    cin >> y;
    cout << "Enter the value of z=";
    cin >> z;
    try
    {
        if ((x - y) != 0)
        {
            R = z / (x - y);
            cout << "R=" << R;
        }
        else
        {
            throw(x, y);
        }
    }
    catch (...)
    {
        cout << "Exception occured due division by Zero" << endl;
    }
    return 0;
}
