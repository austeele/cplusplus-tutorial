// class templates
#include <iostream>
using namespace std;

template <class T>
class mypair {
    T a, b;
    public:
        mypair (T first, T second) {
            a = first;
            b = second;
        }
        T getmax();
};

template <class T> // Here, T is the template parameter
T mypair<T>::getmax () { // T is the type returned by the function, <T> says that function's template parameter is also the class template parameter
    T retval;
    retval = (a > b) ? a : b;
    return retval;
}

int main () {
    mypair <int> myobject (100, 75);
    cout << myobject.getmax();
    return 0;
}