// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

// Creates a file called example.txt and inserts a sentence into it in
// the same way that we are used to doing with cout, but using the file
// stream myfile instead.

int main() {
    ofstream myfile;

    // Associate to a real file by opening it
    myfile.open("example.bin");

    // Write to it
    myfile << "Writing this to a file.\n";

    // Close the file so that the operating system is notified and its
    // resources become available again.
    myfile.close();

    return 0;
}