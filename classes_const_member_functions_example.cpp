// constructor on const object
#include <iostream>
using namespace std;

class MyClass {
    public:
        int x;
        MyClass(int val) : x(val) {}
        int get() {return x;}
};

int main() {
    // Note that below we cannot call get() because member functions of
    // a const object can only be called if they are themselves
    // specified as const members. Would have to change the function to
    // int get() const {return x;}
    // Const members cannot modify the state of an object.
    const MyClass foo(10);  // Pass in value to constructor but cannot change later
//  foo.x = 20;             // not valid: x cannot be modified
    cout << foo.x << '\n';  // ok: data member x can be read
    return 0;
}