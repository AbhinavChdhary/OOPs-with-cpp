// Abhinav Choudhary B.tech CST (49)
#include <iostream>
using namespace std;
 
class Student
{
protected:
   int roll;
   string name;
 
public:
   void input()
   {
       cout << "Enter name: ";
       getline(cin >> ws, name);
       cout << "Enter roll number: ";
       cin >> roll;
   }
   void output()
   {
       cout << "name: " << name << endl;
       cout << "roll: " << roll << endl;
   }
};
class Sports : virtual public Student
{
protected:
   int sp1, sp2, sp3;
   void input()
   {
       cout << "Enter 3 marks of sports: ";
       cin >> sp1 >> sp2 >> sp3;
   }
};
class Academic : virtual public Student
{
protected:
   int m1, m2, m3, m4, m5;
   void input()
   {
       cout << "Enter 5 marks of Academic: ";
       cin >> m1 >> m2 >> m3 >> m4 >> m5;
   }
};
class Result : public Sports, public Academic
{
private:
   int total_marks;
 
public:
   void Total()
   {
       Student::input();
       Sports::input();
       Academic::input();
       total_marks = sp1 + sp2 + sp3 + m1 + m2 + m3 + m4 + m5;
   }
   void display()
   {
       Student::output();
       cout << "total marks: " << total_marks << endl;
   }
};
 
int main()
{
   cout << "INPUT/OUTPUT\nAbhinav Choudhary\nB.tech CST 49\n";
   Result result;
   result.Total();
   result.display();
 
   return 0;
}
