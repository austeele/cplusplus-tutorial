// copy constructor: deep copy
#include <iostream>
#include <string>
using namespace std;

// Default copy is shallow, meaning that the pointer value is copied,
// but not the content itself. In this example, we create a copy
// constructor which performs a deep copy where the content is copied.
class Example5 {
    string* ptr;
    public:
        Example5 (const string& str) : ptr(new string(str)) {}
        ~Example5 () {delete ptr;}
        // copy constructor:
        Example5 (const Example5& x) : ptr(new string(x.content())) {}
        // access content:
        const string& content() const {return *ptr;}
};

int main () {
    Example5 foo ("Example");
    Example5 bar = foo;

    cout << "bar's content: " << bar.content() << '\n';
    return 0;
}