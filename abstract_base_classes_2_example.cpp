// abstract base class
#include <iostream>
using namespace std;

// Classes that contain at least one pure virtual function are known
// as abstract base classes. Below, class Polygon is an abstract base
// class because function area is a pure virtual function. Abstract
// base classes can be used to create pointers with polymorphic
// capabilities, but cannot be uased to declare an object of the base
// class alone.

class Polygon {
    protected:
        int width, height;
    public:
        void set_values (int a, int b)
            { width=a; height=b; }
        virtual int area (void) =0;
        void printarea()
            { cout << this->area() << '\n'; } // can access "this" to access the proper virtual member
};

class Rectangle: public Polygon {
    public:
        int area(void)
            { return width * height; }
};

class Triangle: public Polygon {
    public:
        int area (void)
            { return width * height / 2; }
};

int main() {
    Rectangle rect;
    Triangle trgl;
    Polygon * ppoly1 = &rect;
    Polygon * ppoly2 = &trgl;
    ppoly1->set_values(4, 5);
    ppoly2->set_values(4, 5);
    ppoly1->printarea();
    ppoly2->printarea();
    return 0;
}