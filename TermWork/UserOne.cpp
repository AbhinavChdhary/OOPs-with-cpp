#include <iostream>

using namespace std;

class UserTwo{};

class UserOne{
    string name, fatherName, motherName, gender;
    public:
    void inputInfo(){
        cout<<"Enter name of user: ";
        getline(cin>>ws, name);
        cout<<"Enter name of Father: ";
        getline(cin>>ws, fatherName);
        cout<<"Enter name of Mother: ";
        getline(cin>>ws, motherName);
        cout<<"Enter gender: ";
        getline(cin>>ws, gender);
    }
    friend void UserChecker(UserOne&, UserTwo&);
};
class UserTwo{
    string name, fatherName, motherName, gender;
    public:
    void inputInfo(){
        cout<<"Enter name of user: ";
        getline(cin>>ws, name);
        cout<<"Enter name of Father: ";
        getline(cin>>ws, fatherName);
        cout<<"Enter name of Mother: ";
        getline(cin>>ws, motherName);
        cout<<"Enter gender: ";
        getline(cin>>ws, gender);
    }
    friend void UserChecker(UserOne&, UserTwo&);
};
void UserChecker(UserOne &one, UserTwo &two){
    if((one.fatherName).compare(two.fatherName)==0){
        cout<<"Belongs to same family\n"<<endl;

    }
}
