/*
A retail store has a preferred customer plan where customers may earn 
discounts on  all their purchases. The amount of a customer’s discount 
is determined by the
 amount of  the customer’s purchases in the store. 
• When a preferred customer spends 5000, he or she gets a 5% discount on
 all  future purchases. 
• When a preferred customer spends 10,000, he or she gets a 6% discount
 on all  future purchases. 
• When a preferred customer spends 15,000, he or she gets a 7% discount
 on all  future purchases. 
• When a preferred customer spends 20,000 or more, he or she gets a 10%
  discount on all future purchases. 
Design a class named PreferredCustomer, which is derived from the
 CustomerData class which is having following attributes: 
• FirstName 
• LastName
• Address 
• City 
• State 
• Zip 
• PhoneNo. 
• Customer_id 
The PreferredCustomer class should have the following member variables:
 • purchasesAmount (a double)  
• discountLevel (a double) 
The purchasesAmount variable holds the total of a customer’s purchases.
 The  discountLevel variable should be set to the correct discount
  percentage, according to the  store’s preferred customer plan.
   Write appropriate member functions for this class and  demonstrate
    it in a simple program. 
*/
#include <iostream>

using namespace std;
class CustomerData{
    string FirstName, LastName;
    string address, city, state;
    string Zip, PhoneNo;
    int CustomerId;

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

        cout<<"Enter id of customer\n";
        cin>>CustomerId;
    }
    void displayData(){
        cout<<FirstName<<" "<<LastName<<endl;
        cout<<address<<endl;
        cout<<city<<" "<<state<<endl;
        cout<<Zip<<"\n"<<PhoneNo<<endl;
        cout<<"id: "<<CustomerId<<endl;
    }
};
class PreferredCustomer: public CustomerData{
    double purchasesAmount, discountLevel;
    public:
    void InputData(){
        CustomerData::setData();
        cout<<"Enter the purchase amount:\n";
        cin>>purchasesAmount;
    }
    void CalculateDiscount(){
        if(purchasesAmount>=5000 && purchasesAmount<10000){
            discountLevel = 5;
        }
        else if(purchasesAmount>=10000 && purchasesAmount<15000){
            discountLevel = 6;
        }
        else if(purchasesAmount>=15000 && purchasesAmount<20000){
            discountLevel = 7;
        }
        else if(purchasesAmount>=20000){
            discountLevel = 10;
        }
        else{
            discountLevel = 0;
        }
    }
    void display(){
        CustomerData::displayData();
        cout<<purchasesAmount<<endl;
        CalculateDiscount();
        cout<<"discount: "<<discountLevel<<endl;
    }
};
int main(){
    PreferredCustomer cus;
    cus.InputData();
    cus.display();
}