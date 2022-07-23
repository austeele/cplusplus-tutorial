// static members in classes
#include <iostream>
using namespace std;

class Dummy {
    public:
        static int n;
        Dummy () { n++; };
};

// Static members have same properties as non-member variables, but
// enjoy class scope, so they cannot be initialized directly in the
// class and must be initialized outside of it:
int Dummy::n=0;

int main() {
    Dummy a;
    Dummy b[5];
    cout << a.n << '\n';
    Dummy * c = new Dummy;
    cout << Dummy::n << '\n';
    delete c;
    return 0;
}