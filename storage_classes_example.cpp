// static vs automatic storage
#include <iostream>
using namespace std;

/*
In the program below, we have x as a global variable and y as a local
variable. The storage class of global variables is static and all static
storage variables that are not explicitly initialized are automatically
initialized to zeros. The storage class of local variables is automatic
and all automatic storage variables are initialized to be undefined.
Therefore, running the following code will generate a 0 for x, but
the value for y is undefined (and could be zero).
*/
int x;

int main () {
    int y;
    cout << x << '\n';
    cout << y << '\n';
    return 0;
}