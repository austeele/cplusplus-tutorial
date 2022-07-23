// namespaces
#include <iostream>
using namespace std;

namespace foo {
    int value() { return 5; }
}

namespace bar {
    const double pi = 3.1416;
    double value() { return 2*pi; } // pi accessed without scope operator ::
}

// Namespaces help avoid name collisions, as in the following example:
int main() {
    cout << foo::value() << '\n';
    cout << bar::value() << '\n';
    cout << bar::pi << '\n'; // Here, pi must be accessed with scope operator ::
    return 0;
}
