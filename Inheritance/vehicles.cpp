#include <iostream>
using namespace std;

class Vehicle{
    public:
    float mileage=0.0f, price=0.0f;
    void vehicleInput(){
        cout<<"Input mileage and price\n";
        cin>>mileage>>price;
    }
    void vehicleOutput(){
        cout<<"mileage: "<<mileage<<endl;
        cout<<"price: "<<price<<endl;
    }
};
class Car: public Vehicle{
    public:
    int capacity, cost, warranty;
    string fuelType;
    void carInput(){
        vehicleInput();
        cout<<"Input capacity, cost, warranty\n";
        cin>>capacity>>cost>>warranty;
        cout<<"Enter fuelType petrol/diesel";
        cin>>fuelType;
    }
    void carOutput(){
        vehicleOutput();
        cout<<"capacity: "<<capacity<<endl;
        cout<<"cost: "<<cost<<endl;
        cout<<"warranty: "<<warranty<<endl;
        cout<<"fuel-type: "<<fuelType<<endl;
    }
};
class Bike: public Vehicle{
    public:
    int cylinders, numberOfGears, fuelTankSize;
    string coolingType, wheelType;
    void bikeInput(){
        vehicleInput();
        cout<<"Input number of cylinders, numberOfGears: "<<endl;
        cin>>cylinders>>numberOfGears;
        cout<<"Input fuel tank size: "<<endl;
        cin>>fuelTankSize;
        cout<<"Input cooling type liquid/oil/air: "<<endl;
        cin>>coolingType;
        cout<<"Input wheel type alloys/spokes: ";
        cin>>wheelType;
    }
    void bikeOutput(){
        vehicleOutput();
        cout<<"cylinders: "<<cylinders<<endl;
        cout<<"number of gears: "<<numberOfGears<<endl;
        cout<<"fuel tank size: "<<fuelTankSize<<endl;
        cout<<"wheeltype: "<<wheelType<<endl;
    }
};
class Audi: public Car{
    public:
    string model;
    void audiInput(){
        carInput();
        cout<<"Enter model of audi: ";
        cin>>model;
    }
    void audiOutput(){
        carOutput();
        cout<<"Model: "<<model<<endl;
    }
};
class Ford: public Car{
    public:
    string model;
    void fordInput(){
        carInput();
        cout<<"Enter model of ford: ";
        cin>>model;
    }
    void fordOutput(){
        carOutput();
        cout<<"Model: "<<model<<endl;
    }
};
class Bajaj: public Bike{
    public:
    string make_type;
    void bajajInput(){
        bikeInput();
        cout<<"Enter make-type of audi: ";
        cin>>make_type;
    }
    void bajajOutput(){
        bikeOutput();
        cout<<"MakeType: "<<make_type<<endl;
    }
};
class TVS: public Bike{
    public:
    string make_type;
    void tvsInput(){
        bikeInput();
        cout<<"Enter make-type of audi: ";
        cin>>make_type;
    }
    void tvsOutput(){
        bikeOutput();
        cout<<"MakeType: "<<make_type<<endl;
    }
};
int main(){
    Audi audi;
    audi.audiInput();
    audi.audiOutput();
    Ford ford;
    ford.fordInput();
    ford.fordOutput();
    Bajaj bajaj;
    bajaj.bajajInput();
    bajaj.bajajOutput();
    TVS tvs;
    tvs.bikeInput();
    tvs.bikeOutput();
    
    return 0;
}
