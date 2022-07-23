// increaser
#include <iostream>
using namespace std;

void increase (void* data, int psize) {
    if (psize == sizeof(char)) { // if a char...
        char* pchar; // pointer pchar
        pchar = (char*)data; // cast void pointer to char pointer pchar
        ++(*pchar); // increment the value of what pchar points to
    }
    else if (psize == sizeof(int)) { // else if an int...
        int* pint; // pointer pint
        pint = (int*)data; // cast void pointer to int pointer pint
        ++(*pint); // increment the value of what pint points to
    }
}

int main () {
    char a = 'x';
    int b = 1602;
    increase (&a,sizeof(a));
    increase (&b,sizeof(b));
    cout << a << ", " << b << '\n';
    return 0;
}