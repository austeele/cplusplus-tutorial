// destructors
#include <iostream>
#include <string>
using namespace std;

class Example4 {
    string* ptr;
    public:
        // constructors (allocate storage for a string):
        Example4 () : ptr(new string) {}
        Example4 (const string& str) : ptr(new string(str)) {}
        // destructor (releases storage for the string):
        ~Example4 () {delete ptr;}
        // access content:
        const string& content() const {return *ptr;}
};

int main () {
    Example4 foo;
    Example4 bar ("Example");

    cout << "bar's content: " << bar.content() << '\n';
    return 0;

    // The destructor for an object is called at the end of its lifetime;
    // in the case of foo and bar, this happens at the end of function main
}