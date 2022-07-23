// overloading operators example
#include <iostream>
using namespace std;

class CVector {
    public:
        int x, y;
        CVector () {};
        CVector (int a, int b) : x(a), y(b) {}
        CVector operator+ (const CVector&);
};

// Can also have a space between operator and +, doesn't seem to matter
CVector CVector::operator+ (const CVector& param) {
    CVector temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
    return temp;
}

int main() {
    CVector foo (3,1);
    CVector bar (1,2);
    CVector result;
    result = foo + bar; // alternative: foo.operator+ (bar);
    cout << result.x << ',' << result.y << '\n';
    return 0;
}
