// Abhinav Choudhary B.tech CST (49)
#include <iostream>
using namespace std;
class Student
{
public:
    int age, enroll, marks;
    string name;

    void getdata()
    {
        cout << "Enter the student Age:";
        cin >> age;
        char dump = getchar();
        cout << "Enter the Name of student=";
        getline(cin>>ws, name);
        cout << "Enter the Enroll number and marks of student:=";
        cin >> enroll >> marks;
    }
    void display()
    {
        cout << "----Display the information of Student class----\n";
        cout << "Name of student: " << name << endl;
        cout << "Age of student: " << age << endl;
        cout << "Enroll number of student=" << enroll << "\n";
        cout << "Marks of student=" << marks << "\n";
    }
};
class Faculty
{
public:
    string Faculty_name, deaprtment, gender;
    int code, salary, age, experience;

    void getdata()
    {
        cout << "Enter the name of Faculty";
        cin >> Faculty_name;
        cout << "Enter the code of Faculty:";
        cin >> code;
        cout << "Enter salary:";
        cin >> salary;
        cout << "Enter deaprtment:";
        // cin>>deaprtment;
        char dump = getchar();
        getline(cin, deaprtment);
        cout << "Enter the gender and age of Faculty:";
        cin >> gender >> age;
    }
    void display()
    {
        cout << "::::Display the information of Faculty class:::";
        cout << "\n"
             << "Name of Faculty=" << Faculty_name;
        cout << "\n"
             << "Code of Faculty=" << code << endl;
        cout << "salary=" << salary << "\n";
        cout << "deaprtment=" << deaprtment << endl;
        cout << "gender=" << gender;
    }
};
class person : public Student, public Faculty
{
public:
    void show()
    {
        cout << "Person is the derived class:";
    }
};

int main()
{
    cout << "INPUT/OUTPUT\nAbhinav Choudhary\nB.tech CST 49\n";

    return 0;
}