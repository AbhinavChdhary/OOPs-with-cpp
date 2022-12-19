#include<iostream>

using namespace std;

class Fuel{
    int flight;
    string destination;
    float distance=0.0f, fuel=0.0f;

    void CalFuel(){
        if(distance<=1000.0)
            fuel = 500.0;
        else if(distance>1000 && distance<=2000)
            fuel = 1100.0;
        else
            fuel = 2200.0;
    }
    public:
    void feedInfo(){
        cout<<"Enter Flight number: ";
        cin>>flight;
        cout<<"Enter destination: ";
        getline(cin>>ws, destination);
        cout<<"Enter distance: ";
        cin>>distance;
        cout<<endl;
        CalFuel();
    }
    void showInfo(){
        cout<<"Flight number: "<<flight<<endl;
        cout<<"Destination: "<<destination<<endl;
        cout<<"Distance: "<<distance<<endl;
        cout<<"Fuel: "<<fuel<<endl;
    }
};
int main(){
    Fuel fuel;
    fuel.feedInfo();
    fuel.showInfo();
}