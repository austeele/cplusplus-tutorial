// friend functions
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
        Rectangle () {}
        Rectangle (int x, int y) : width(x), height(y) {}
        int area() {return width * height;}
        friend Rectangle duplicate (const Rectangle&);
};

// function "duplicate" is a friend of class "Rectangle", meaning that
// duplicate can access the members width and height, despite the fact
// that they are private. However, note that "duplicate" is not a
// member of class "Rectangle"; it merely has access to private and
// protected members without being a member.
Rectangle duplicate (const Rectangle& param) {
    Rectangle res;
    res.width = param.width * 2;
    res.height = param.height * 2;
    return res;
}

int main() {
    Rectangle foo;
    Rectangle bar (2,3);
    foo = duplicate (bar);
    cout << foo.area() << '\n';
    return 0;
}