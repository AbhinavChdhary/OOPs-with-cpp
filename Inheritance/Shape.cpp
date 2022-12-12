#include <iostream>
using namespace std;

class Shape{
    public:
    Shape(){
        cout<<"This is a shape\n";
    }
};
class Polygon: public Shape{
    public:
    Polygon(){
        cout<<"This is a polygon\n";
    }
};
class Rectangle: public Polygon{
    public:
    Rectangle(){
        cout<<"This is a rectangle\n";
    }
};
class Triangle: public Polygon{
    public:
    Triangle(){
        cout<<"This is a triangle\n";
    }
};
class Square: public Rectangle{
    public:
    Square(){
        cout<<"This is a square\n";
    }
};

int main(){
    Shape shape;
    cout<<endl;
    Polygon polygon;
    cout<<endl;
    Rectangle rectangle;
    cout<<endl;
    Triangle triangle;
    cout<<endl;
    Square square;

    return 0;
}