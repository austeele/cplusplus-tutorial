// typeid, polymorphic class
#include <iostream>
#include <typeinfo>
#include <exception>
using namespace std;

// The type that typeid considers for pointers is the pointer type
// itself (both a and b are of type class Base *). However, when typeid
// is applied to objects (like *a and *b) typeid yields their dynamic
// type (i.e. the type of their most derived complete object)

class Base { virtual void f() {} };
class Derived : public Base {};

int main () {
    try {
        Base* a = new Base;
        Base* b = new Derived;
        cout << "a is: " << typeid(a).name() << '\n';
        cout << "b is: " << typeid(b).name() << '\n';
        cout << "*a is: " << typeid(*a).name() << '\n';
        cout << "*b is: " << typeid(*b).name() << '\n';
    } catch (exception& e) {cout << "Exception: " << e.what() << '\n';}
    return 0;
}