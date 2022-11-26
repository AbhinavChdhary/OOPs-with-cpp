/*An electronics shop has announced the following seasonal discounts on the purchase of certain items.
Compute and print the net amount to be paid by a customer along with his name and address.
(Hint: Discount = (discount rate / 100) * amount of purchase, Net amount = amount of purchase – discount)
*/
#include <iostream>
using namespace std;
 
int main(){
    char c;
    string name, add;
    float amt, newamt;
    cout<<"enter name and address\n";
    getline(cin, name);
    getline(cin, add);
    cout<<"enter your choice:\n";
    cout<<"L for Laptop\n";
    cout<<"D for Desktop\n";
    cin>>c;
 
    switch (c)
    {
    case 'L':
        cout<<"enter amount\n";
        cin>>amt;
        if(amt<=25000)
            newamt=amt;
        else if(amt>25000 && amt<=57000)
            newamt = amt-amt*0.05;
        else if(amt>57000 && amt<=100000)
            newamt = amt-amt*0.075;
        else
            newamt = amt-amt*0.1;
        cout<<"the discounted amount is= "<<newamt;
        break;
    case 'D':
        cout<<"enter amount:\n";
        cin>>amt;
        if(amt<=25000)
            newamt= amt-amt*0.05;
        else if(amt>25000 && amt<=57000)
            newamt = amt-amt*0.076;
        else if(amt>57000 && amt<=100000)
            newamt = amt-amt*0.1;
        else
            newamt = amt-amt*0.15;
        cout<<"the discounted amount is= "<<newamt;
        break;
    default:
        cout<<"nothing was bought";
    }
    return 0;
}
