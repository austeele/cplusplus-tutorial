// dynamic_cast
#include <iostream>
#include <exception>
using namespace std;

// dynamic_cast has the purpose of ensuring that the result of the type
// conversion points to a valid complete object of the destination
// pointer type. In the example below, see that pbb points to an object
// of type Base; therefore, when we try to dynamic_cast it to a pointer
// of type Derived, we fail and return 0 (null pointer) to pd.

// I'm not quite sure what it would take to make Derived a full object
// of type Base - is it even possible? I tried getting rid of int a;
// below and providing an implementation of the dummy function, but pbb
// still cannot be dynamic-casted to type Derived*.

// static_cast (not shown below): performs upcasts (pointer-to-derived
// to pointer-to-base) and downcasts (pointer-to-base to pointer-to-
// derived). No runtime checks to guarantee that the object being
// converted is a full object of the destination type. Up to programmer
// to ensure that the conversion is safe. Also does not incur overhead
// of type-safety checks of dynamic_cast.

// reinterpret_cast (not shown below): converts any pointer type to any
// other pointer type, even of unrelated classes. Difference between it
// and static_cast are some low-level operations based on reinterpreting
// the binary representations of the types, which on most cases results
// in code which is system-specific, and thus non-portable.

// const_cast (not shown below): manipulates the constness of the object
// pointed by a pointer, either to be set or to be removed.

class Base { virtual void dummy() {} };
class Derived: public Base { int a; };

int main() {
    try {
        Base * pba = new Derived;
        Base * pbb = new Base;
        Derived * pd;

        pd = dynamic_cast<Derived*>(pba);
        if (pd == 0) cout << "Null pointer on first type-cast.\n";

        pd = dynamic_cast<Derived*>(pbb);
        if (pd == 0) cout << "Null pointer on second type-cast.\n";
    } catch (exception& e) {cout << "Exception: " << e.what();}
    return 0;
}