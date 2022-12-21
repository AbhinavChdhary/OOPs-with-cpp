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
       cout << "Enter the student Age: ";
       cin >> age;
       cout << "Enter the Name of student: ";
       getline(cin >> ws, name);
       cout << "Enter the Enroll number and marks of student: ";
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
   string Faculty_name, department, gender;
   int code, salary, age, experience;
 
   void getdata()
   {
       cout << "Enter the name of Faculty: ";
       getline(cin >> ws, Faculty_name);
       cout << "Enter the code of Faculty: ";
       cin >> code;
       cout << "Enter salary: ";
       cin >> salary;
       cout << "Enter deaprtment: ";
       getline(cin >> ws, department);
       cout << "Enter the gender and age of Faculty: ";
       cin >> gender >> age;
   }
   void display()
   {
       cout << "----Display the information of Faculty class---";
       cout << "Name of Faculty: " << Faculty_name << endl;
       cout << "Code of Faculty: " << code << endl;
       cout << "salary: " << salary << endl;
       cout << "department: " << department << endl;
       cout << "gender: " << gender << endl;
       cout << "age: " << age << endl;
   }
};
class Person : public Student, public Faculty
{
public:
   void input()
   {
       Student::getdata();
       Faculty::getdata();
   }
   void show()
   {
       Student::display();
       Faculty::display();
   }
};
 
int main()
{
   cout << "INPUT/OUTPUT\nAbhinav Choudhary\nB.tech CST 49\n";
   Person person;
   person.input();
   person.show();
   return 0;
}
