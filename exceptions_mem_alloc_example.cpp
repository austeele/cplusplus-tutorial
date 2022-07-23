// bad_alloc standard exception
#include <iostream>
#include <exception>
using namespace std;

int main() {
    try {
        int* myarray= new int[1000]; // Try changing to a large number,
                                     // output would be "Standard
                                     // exception: std::bad_alloc"
    }
    catch (exception& e) {
        cout << "Standard exception: " << e.what() << endl;
    }
    return 0;
}