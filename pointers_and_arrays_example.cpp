// more pointers
#include <iostream>
using namespace std;

// An array is basically a pointer, with brackets as an offset operator.
// Can assign pointer to array, but not the other way around.
int main() {
    int numbers[5];
    int * p;
    p = numbers; *p = 10; // pointer now is to first element in array, then value pointed to is 10
    p++; *p = 20; // second element in array is now 20
    p = &numbers[2]; *p = 30; // third element in array is now 30
    p = numbers + 3; *p = 40; // fourth element in array is now 40
    p = numbers; *(p+4) = 50; // fifth element in array is now 50
    for (int n = 0; n < 5; n++) {
        cout << numbers[n] << ", ";
    }

    // test
    int myvar = 1; // not a pointer, just an int with value 1
    int *foo = &myvar; // foo is a pointer pointing to address myvar. The star here is NOT a dereference operator.
    int *bar = foo; // bar is a pointer which is the same as foo
    cout << "\n" << "myvar: " << myvar << "\n";
    cout << "&myvar: " << &myvar << "\n";
    cout << "foo: " << foo << "\n";
    cout << "*foo: " << *foo << "\n";
    cout << "bar: " << bar << "\n";
    cout << "*bar: " << *bar << "\n";
    return 0;
}