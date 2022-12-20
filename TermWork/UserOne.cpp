// Abhinav Choudhary B.tech CST (49)
#include <iostream>
using namespace std;
class UserTwo;
class UserOne
{
    string name, f_name, m_name, gender;

public:
    void inputinfo()
    {
        cout << "enter your name:";
        getline(cin >> ws, name);
        cout << "enter your father's name:";
        getline(cin >> ws, f_name);
        cout << "enter your mother's name:";
        getline(cin >> ws, m_name);
        cout << "enter your gender:";
        getline(cin >> ws, gender);
        cout << endl;
    }
    friend void userchecker(UserOne &, UserTwo &);
};
class UserTwo
{
    string name, f_name, m_name, gender;

public:
    void inputinfo()
    {
        cout << "enter your name:";
        getline(cin >> ws, name);
        cout << "enter your father's name:";
        getline(cin >> ws, f_name);
        cout << "enter your mother's name:";
        getline(cin >> ws, m_name);
        cout << "enter your gender:";
        getline(cin >> ws, gender);
        cout << endl;
    }
    friend void userchecker(UserOne &, UserTwo &);
};
void userchecker(UserOne &ot1, UserTwo &ot2)
{

    if ((ot1.f_name.compare(ot2.f_name) == 0) && (ot1.m_name.compare(ot2.m_name)) == 0)
    {
        cout << "belongs to same family" << endl;
        if ((ot1.gender == "male") && (ot2.gender == "male"))
        {
            cout << "we are brothers";
        }
        if ((ot1.gender == "female") && (ot2.gender == "female"))
        {
            cout << "we are sisters";
        }
        else
        {
            cout << "we are brother and sister";
        }
    }
    else
    {
        cout << "belongs to different family";
    }
}
int main()
{
    cout << "INPUT/OUTPUT\nAbhinav Choudhary\nB.tech CST 49\n";
    UserOne ob1;
    ob1.inputinfo();
    UserTwo ob2;
    ob2.inputinfo();
    userchecker(ob1, ob2);
    return 0;
}
