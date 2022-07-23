// example: class constructor
#include <iostream>
using namespace std;

class Rectangle {
    int width, height; // both private by default because there's no keyword
    public:
        Rectangle (int, int); // public
        int area() {return width*height;} // public
};

// The following is a constructor. It does not have a return type, not
// even void, because it simply initializes the object and never returns values
Rectangle::Rectangle (int a, int b) {
    width = a;
    height = b;
}

int main() {
    Rectangle rect (3, 4);
    Rectangle rectb (5, 6);
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    return 0;
}