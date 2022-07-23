// pointers to structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
    string title;
    int year;
};

// The arrow operator (->) is a dereference operator that is used
// exclusively with pointers to objects that have members.
int main() {
    string mystr;

    movies_t amovie;
    movies_t * pmovie; // pointer to a struct
    pmovie = &amovie;

    cout << "Enter title: ";
    getline (cin, pmovie->title);
    cout << "Enter year: ";
    getline (cin, mystr);
    (stringstream) mystr >> pmovie->year;

    cout <<"\nYou have entered:\n";
    cout << pmovie->title;
    cout << " (" << pmovie->year << ")\n";

    return 0;
}