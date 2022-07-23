// explicit:
#include <iostream>
using namespace std;

// Here, we learned about the difficulty that arises when you don't want
// some functions in class B to be able to operate on some objects from
// class A. Perhaps it's because this was not the design intent. Using
// the keyword "explicit" allows us to avoid this:

class A{};

class B{
    public:
        // conversion from A (constructor):
        explicit B (const A& x) {}
        // conversion from A (assignment):
        B& operator= (const A& x) {return *this;}
        // conversion to A (type-cast operator):
        operator A() {return A();}
};

void fn (B x) {}

int main() {
    A foo;
    B bar(foo);  // calls constructor
    bar = foo;   // calls assignment
    foo = bar;   // calls type-cast operator

//  fn(foo);     // not allowed because the constructor conversion of B is explicit
//  B bar = foo; // also not allowed because constructors with explicit
                 // cannot be called with assignment-like syntax
    fn(bar);

    return 0;
}