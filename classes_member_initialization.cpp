// member initialization
#include <iostream>
using namespace std;

// Note that Circle below only uses member initialization rather than a
// default constructor class, so when we call it within Cylinder, we
// must also use member initialization there.
class Circle {
    double radius;
    public:
        Circle(double r) : radius(r) { } // member initialization
        double area() {return radius*radius*3.14159265;}
};

class Cylinder {
    Circle base;
    double height;
    public:
        Cylinder(double r, double h) : base(r), height(h) {} // member initialization
        double volume() {return base.area() * height;}
};

int main() {
    Cylinder foo (10, 20);

    cout << "foo's volume: " << foo.volume() << '\n';
    return 0;
}