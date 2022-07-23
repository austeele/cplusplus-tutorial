// example: class constructor
#include <iostream>
using namespace std;

class Rectangle {
    int width, height; // both private by default because there's no keyword
    public:
        Rectangle(); // public constructor
        Rectangle (int, int); // public constructor
        int area(void) {return width*height;} // public
};

// The following is the default constructor. Also does not have return
// types but rather is used when an object is declared unitialized.
Rectangle::Rectangle() {
    width = 5;
    height = 5;
}

// The following is a constructor. It does not have a return type, not
// even void, because it simply initializes the object and never returns values
Rectangle::Rectangle (int a, int b) {
    width = a;
    height = b;
}

int main() {
    Rectangle rect (3, 4);
    Rectangle rectb; // Notice, no parentheses when calling default constructor!
                     // That would mean it's a function declaration with return type "Rectangle".
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    return 0;
}