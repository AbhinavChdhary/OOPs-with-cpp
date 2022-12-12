#include <iostream>
using namespace std;

class Fruit{
    int numberOfFruits;
    public:
    void calTotal(int a, int b){
        numberOfFruits = a+b;
    }
    void print(){
        cout<<"total: "<<numberOfFruits<<endl;
    }
};
class Apples{
    int apples;
    public:
    Apples(int a){
        apples = a;
    }
    void printApples(){
        cout<<"number of apples: "<<apples<<endl;
    }
};
class Mangoes{
    int mangoes;
    public:
    Mangoes(int a){
        mangoes = a;
    }
    void printMangoes(){
        cout<<"number of mangoes: "<<mangoes<<endl;
    };
};

int main(){
    int a, m;
    cout<<"Enter the number of apples and mangoes: ";
    cin>>a>>m;
    Mangoes mango(m);
    Apples apple(a);
    Fruit fruit;
    fruit.calTotal(a, m);
    apple.printApples();
    mango.printMangoes();
    fruit.print();

    return 0;
}