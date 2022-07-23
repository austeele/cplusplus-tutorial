// const_cast
#include <iostream>
using namespace std;

// const_cast changes c below to be non-const so it can be passed to the
// print function, which expects a non-const char * input

void print (char * str) {
    cout << str << '\n';
}

int main() {
    const char * c = "sample text";
    print ( const_cast<char *> (c));
    return 0;
}