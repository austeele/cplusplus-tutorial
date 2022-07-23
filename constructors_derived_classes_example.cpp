// constructors and derived classes
#include <iostream>
using namespace std;

class Mother {
    public:
        Mother ()
            { cout << "Mother: no parameters\n"; }
        Mother (int a)
            { cout << "Mother: int parameter\n"; }
};

// constructor for class Daughter ends up calling default constructor
// for Mother
class Daughter : public Mother {
    public:
        Daughter (int a) // nothing specified: call default constructor
            { cout << "Daughter: int parameter\n\n"; }
};

// constructor for class Son ends up calling int constructor for Mother,
// since it is specified after the constructor colon below
class Son : public Mother {
    public:
        Son (int a) : Mother (a) // constructor specified: call this specific constructor
            { cout << "Son: int parameter\n\n"; }
};

int main () {
    Daughter kelly(0);
    Son bud(0);

    return 0;
}