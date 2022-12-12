/*
Design a class named PersonData with the following
 member variables: 
FirstName 
LastName 
Address 
City 
State 
Zip 
PhoneNo. 
Write the appropriate accessor (getter) and mutator (setter)
 functions for these member  variables. Next, design
  a class named CustomerData,
 which is derived from the  PersonData class.
 The CustomerData class should have the following
  member variables: 
• Customerid 
• MailingList. 
The customerNumber varaible will be used to hold a unique integer
for each customer. The mailing list variable should be a bool. It
will be set to true if the customer or false if the customer
does not wish to be on a mailing list. Write appropriate accessor
and mutator functions for these member variables. Demonstrate
an object of the CustomerData class in a simple prgram.
*/
#include <iostream>
using namespace std;

class personData{
    string FirstName, LastName;
    string address, city, state;
    string Zip, PhoneNo;

    public:
    void setData(){
        cout<<"enter first and last name\n";
        cin>>FirstName>>LastName;

        cout<<"enter address\n";
        getline(cin>>ws, address);

        cout<<"enter city, state\n";
        cin>>city>>state;

        cout<<"Enter zip code and mobile no\n";
        cin>>Zip>>PhoneNo;
    }
    void displayData(){
        cout<<FirstName<<" "<<LastName<<endl;
        cout<<address<<endl;
        cout<<city<<" "<<state<<endl;
        cout<<Zip<<"\n"<<PhoneNo<<endl;
    }
};
class CustomerData: public personData{
    int CustomerId;
    bool MailingList = false;
    public:
    void inputData(){
        personData::setData();
        cout<<"Enter id of customer\n";
        cin>>CustomerId;
        char ch;
        cout<<"Enter y/n if the customer wants to be on Mailing List\n";
        cin>>ch;
        if(ch=='y')
            MailingList = true;
        else
            MailingList = false;
    }
    void customerDataDisplay(){
        personData::displayData();
        cout<<"id: "<<CustomerId<<endl;
        cout<<"on the mailing list? "<<MailingList<<endl;
    }
};
int main(){
    CustomerData customer;
    customer.inputData();
    customer.customerDataDisplay();
}

