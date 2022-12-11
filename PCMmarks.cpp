#include <iostream>
using namespace std;

class Marks{
    public:
    int rollno, avgmarks;
    string name;
};
class Physics: public Marks{
    public:
    int marks;
    Physics(int m){
        marks = m;
    }
};
class Chemistry: public Marks{
    public:
    int marks;
    Chemistry(int m){
        marks = m;
    }
};
class Mathematics: public Marks{
    public:
    int marks;
    Mathematics(int m){
        marks = m;
    }
};
int main(){
    
    return 0;
}