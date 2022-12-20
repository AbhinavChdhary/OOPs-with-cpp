//Abhinav Choudhary B.tech CST (49)
#include <iostream>
#include <math.h>

using namespace std;

class ConsDemo{
    public:
    void SumDemo(int x, char ch){
        if(ch=='p')
            cout<<pow(x, 2)<<endl;
        else
            cout<<pow(x, 3)<<endl;
    }
    void SumDemo(int x, int y, char ch){
        if(ch=='a')
            cout<<x+y<<endl;
        else
            cout<<(int)ch<<endl;
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
    con.SumDemo(2, 'p');
    con.SumDemo(2, 5, 'a');
    con.SumDemo("School", "College");

    return 0;
}