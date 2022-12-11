#include <iostream>
using namespace std;

class Mammals{
    public:
    void printMammal(){
        cout<<"I am mammal\n";
    }
};
class MarineAnimals{
    public:
    void printMarine(){
        cout<<"I am a marine animal\n";
    }
};
class BlueWhale: public MarineAnimals, public Mammals{
    public:
    void printBlueWhale(){
        Mammals::printMammal();
        MarineAnimals::printMarine();
        cout<<"I belong to both the categories, Mammals as well as Marine Animals\n";
    }
};
int main(){
    Mammals mammal;
    mammal.printMammal();
    MarineAnimals marine;
    marine.printMarine();
    BlueWhale blue;
    blue.printBlueWhale();

    return 0;
}