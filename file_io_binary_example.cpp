// reading an entire binary file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    streampos size;
    char * memblock;

    // opening the file with the ios::ate flag means that the get pointer
    // will be positioned at the end of the file. This way, when we call
    // to member tellg(), we will directly obtain the size of the file.
    ifstream file ("example.bin", ios::in | ios::binary | ios::ate);
    if (file.is_open()) {
        size = file.tellg();

        // Request allocation of a memory block large enough to hold the
        // entire file
        memblock = new char [size];

        // Set the get position at the beginning of the file (remember
        // that we opened the file with this pointer at the end), then
        // we read the entire file, and finally close it:
        file.seekg(0, ios::beg);
        file.read(memblock, size);
        file.close();

        cout << "the entire file content is in memory";

        delete[] memblock;
    }
    else cout << "Unable to open file";
    return 0;
}