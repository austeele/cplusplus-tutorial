// friend class
#include <iostream>
using namespace std;

// Rectangle is a friend of class Square, so it can access private and
// protected members of Square.

// This declaration is necessary because Rectangle uses Square, and
// Square uses Rectangle.
class Square;

class Rectangle {
    int width, height;
    public:
        int area() {
            return (width * height);
        }
        void convert (Square a);
};

class Square {
    friend class Rectangle;
    private:
        int side;
    public:
        Square (int a) : side(a) {}
};

void Rectangle::convert(Square a) {
    width = a.side;
    height = a.side;
}

int main() {
    Rectangle rect;
    Square sqr (4);
    rect.convert(sqr);
    cout << rect.area();
    return 0;
}