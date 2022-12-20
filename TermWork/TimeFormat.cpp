// Abhinav Choudhary B.tech CST (49)
#include <bits/stdc++.h>

using namespace std;

class times
{
    int hr, min, sec;

public:
    times()
    {
        hr = 0;
        min = 0;
        sec = 0;
    }
    times(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }
    void addtimes(times &B, times &C)
    {
        C.sec = (sec + B.sec) % 60;
        C.min = min + B.min + (sec + B.sec) / 60;
        C.hr = hr + B.hr + C.min / 60;
        C.min %= 60;
        C.hr %= 12;
    }
    void display()
    {
        cout << hr << ":" << min << ":" << sec << endl;
    }
};

int main()
{
    cout << "INPUT/OUTPUT\nAbhinav Choudhary\nB.tech CST 49\n";
    int h, m, s;
    cout<<"Enter 1st hour, minute, second:\n";
    cin>>h>>m>>s;
    times A(h, m, s);
    cout<<"Enter 2nd hour, minute, second:\n";
    cin>>h>>m>>s;
    times B(h, m, s), C;
    A.addtimes(B, C);
    C.display();

    return 0;
}
