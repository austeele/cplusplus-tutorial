// template specialization
#include <iostream>
using namespace std;

// class template (generic): template <class T> class mycontainer { ... }
// class specialization:     template <> class mycontainer <char> { ... }

// class template:
template <class T>
class mycontainer {
    T element;
    public:
        mycontainer (T arg) {element = arg;}
        T increase () {return ++element;}
};

// class template specialization:
template <> // syntax for class template specialization
class mycontainer <char> {
    char element;
    public:
        mycontainer (char arg) {element = arg;}
        char uppercase () {
            if ((element>='a') && (element<='z'))
                element += 'A' - 'a';
            return element;
        }
};

int main() {
    mycontainer <int> myint (7);
    mycontainer <char> mychar ('j');
    cout << myint.increase() << endl;
    cout << mychar.uppercase() << endl;
    // Note that we cannot call "increase" on mychar because there is no
    // inheritance of members from the generic template to the specialization.
    return 0;
}