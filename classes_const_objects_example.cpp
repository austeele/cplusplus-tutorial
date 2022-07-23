// constant objects
#include <iostream>
using namespace std;

class MyClass {
    int x;
    public:
        MyClass (int val) : x(val) {}
        // Below, get() must be specified as a constant member so that
        // the print function, which takes a constant class as input,
        // can use the constant member function. (Since constant
        // classes can only access constant member functions.)
        const int& get() const {return x;}
};

void print (const MyClass& arg) {
    cout << arg.get() << '\n';
}

int main() {
    MyClass foo (10);
    print(foo);

    return 0;
}