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
    personData(string fname, string lname, string add,
    string ct, string st, string zipCode, string PhoneNo){
        FirstName = fname;
        LastName = lname;
        address = add;
        ct = city;
        state = st;
        Zip = zipCode;
        PhoneNo = PhoneNo;
    }
    void setFirstName(string fname){
        FirstName = fname;
    }
    void setLastName(string lname){
        LastName = lname;
    }
    void setAddress(string add){
        address = add;
    }
    void setCityName(string ct){
        city = ct;
    }
    void setStateName(string st){
        state = st;
    }
    void setZipCode(string zipCode){
        Zip = zipCode;
    }
    void setPhoneNo(string pn){
        PhoneNo = pn;
    }
    string getFirstName(){
        return FirstName;
    }
    string getLastName(){
        return LastName;
    }
    string getAddress(){
        return address;
    }
    string getCityName(){
        return city;
    }
    string getStateName(){
        return state;
    }
    string getZipCode(){
        return Zip;
    }
    string getPhone(){
        return PhoneNo;
    }
};
class CustomerData: public personData{
    int CustomerId;
    bool MailingList = false;
    public:
    CustomerData(int a, bool b){
        CustomerId = a;
        MailingList = b;
    }
    void setCustomerId(int a){
        CustomerId = a;
    }
    void setPhoneNo(bool b){
        MailingList = b;
    }
    int getCustomerId(){
        return CustomerId;
    }
    bool getMailingList(){
        return MailingList;
    }
};

