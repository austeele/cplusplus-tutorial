// function template
#include <iostream>
using namespace std;

// A template accepts a generic class T, which can be used anywhere
// in the function.
template <class T>
T sum(T a, T b) {
    T result;
    result = a + b;
    return result;
}

int main() {
    int i = 5, j = 6, k;
    double f = 2.0, g = 0.5, h;
    // Instantiate the function template just as you would a regular
    // function, but also include the type name in brackets:
    k = sum<int>(i, j);
    h = sum<double>(f, g);
    cout << k << '\n';
    cout << h << '\n';
    return 0;
}