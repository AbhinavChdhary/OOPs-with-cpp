#include <iostream>
using namespace std;

class Employee{
    public:
    int emp_code;
    string name;

    void EmpInput(){
        cout<<"Enter employee code and name: ";
        cin>>emp_code>>name;
    }
    void EmpOutput(){
        cout<<name<<" "<<emp_code<<endl;
    }
};
class Fulltime: public Employee{
    public:
    int dailyRate, numDays, salary;

    void FullTimeInput(){
        Employee::EmpInput();
        cout<<"Enter daily rate, number of days, salary: ";
        cin>>dailyRate>>numDays>>salary;
    }
    void FullTimeOutput(){
        Employee::EmpOutput();
        cout<<"Full time employ\n";
        cout<<"daily rate: "<<dailyRate<<endl;
        cout<<"num days: "<<numDays<<endl;
        cout<<"salary: "<<salary<<endl;
    }
};
class Parttime: public Employee{
    public:
    int hourlyRate, workingHours, salary;

    void FullTimeInput(){
        Employee::EmpInput();
        cout<<"Enter hourly rate, working hours, salary: ";
        cin>>hourlyRate>>workingHours>>salary;
    }
    void FullTimeOutput(){
        Employee::EmpOutput();
        cout<<"Full time employ\n";
        cout<<"hourly rate: "<<hourlyRate<<endl;
        cout<<"working hours: "<<workingHours<<endl;
        cout<<"salary: "<<salary<<endl;
    }
};
int main(){
    int n, ch;
    cout<<"enter number of employees: "<<endl;
    cin>>n;
    cout<<"Enter 1 for full time employees\n0 for part time\n";
    cin>>ch;
    
    
    return 0;
}