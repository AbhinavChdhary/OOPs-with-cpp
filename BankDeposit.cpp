/*Using the switch statement, write a menu-driven
     program to calculate the maturity amount of a bank
     deposit.
The user is given the following options:
(i) Term Deposit
(ii) Recurring Deposit
*/
#include <iostream>
using namespace std;
 
int main(){
    int c;
    cout<<"enter your choice:\n";
    cout<<"1 for term deposit\n";
    cout<<"2 for recurring deposit\n";
    cin>>c;
    float p, r, n, amt;
    switch (c)
    {
    case 1:
        cout<<"enter principal, rate, time period in years\n";
        cin>>p>>r>>n;
        amt=p*(1+r/100.0)*n;
        cout<<"the maturity amount is"<<amt<<endl;
        break;
    case 2:
        cout<<"enter monthly installment, rate, time period in months\n";
        cin>>p>>r>>n;
        amt=p*n+(p*n*(n+1)/2.0)*(r/100.0)*(1.0/12.0);
        cout<<"the maturity amount is"<<amt<<endl;
        break;
    default:
        cout<<"wrong choice";
    }
    return 0;
}
