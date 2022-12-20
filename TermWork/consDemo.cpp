//Abhinav Choudhary B.tech CST (49)
#include <iostream>
#include <math.h>

using namespace std;

class ConsDemo{
    public:
    void SumDemo(int x, char ch){
        if(ch=='p')
            cout<<"Square: "<<pow(x, 2)<<endl;
        else
            cout<<"Cube: "<<pow(x, 3)<<endl;
    }
    void SumDemo(int x, int y, char ch){
        if(ch=='a')
            cout<<"addition: "<<x+y<<endl;
        else
            cout<<"ASCII value: "<<(int)ch<<endl;
    }
    void SumDemo(string st1, string st2){
        if(st1.compare(st2)==0)
            cout<<"Strings Are Equal\n";
        else    
            cout<<"No not equal\n";
    }
};

int main(){
    cout<<"INPUT/OUTPUT\nAbhinav Choudhary\nB.tech CST 49\n";
    ConsDemo con;
    int x, y;
    char ch;
    cout<<"Enter a number and a character:";
    cin>>x>>ch;
    con.SumDemo(x, ch);

    cout<<"Enter two numbers and a character:";
    cin>>x>>y>>ch;
    con.SumDemo(x, y, ch);

    string s1, s2;
    cout<<"Enter two strings:";
    cin>>s1>>s2;
    con.SumDemo(s1, s2);

    return 0;
}