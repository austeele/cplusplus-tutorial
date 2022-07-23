// pointers as arguments
#include <iostream>
using namespace std;

// Want to change the value pointed to by the pointers, so do not make
// these consts
void increment_all (int* start, int* stop) {
    int * current = start; // current is a pointer equal to start
    while (current != stop) {
        ++(*current); // increment value pointed to by current
        ++current; // increment pointer
    }
}

// Just want to print, not modify, so make the function parameters const
void print_all (const int* start, const int* stop) {
    const int * current = start;
    while (current != stop) {
        cout << *current << '\n';
        ++current; //increment pointer
    }
}

int main() {
    int numbers[] = {10, 20, 30};
    increment_all (numbers, numbers + 3);
    print_all (numbers, numbers + 3);
    return 0;
}