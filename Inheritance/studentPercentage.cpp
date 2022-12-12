#include <iostream>
using namespace std;

class Marks{
    public:
    int m1, m2, m3;

    void input(){
        cout<<"Enter marks of 3 subjects: "<<endl;
        cin>>m1>>m2>>m3;
    }
};
class Student: public Marks{
    public:
    int total;
    void totalMarks(){
        Marks::input();
        total = Marks::m1 + Marks::m2 + Marks::m3;
    }
};
class Result: public Student{
    public:
    void display(){
        Student::totalMarks();
        cout<<"total marks: "<<Student::total<<endl;
    }
};
int main(){
    Result result;
    result.display();
    return 0;
}