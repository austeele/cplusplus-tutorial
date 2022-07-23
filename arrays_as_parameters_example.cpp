// arrays as parameters
#include <iostream>
using namespace std;

void printarray (int arg[], int length) {
    for (int n = 0; n < length; ++n) {
        cout << arg[n] << ' ';
    }
    cout << '\n';
}

// Really interesting, when you change the length parameter in the first
// declaration of printarray below to be 8, it will print firstarray
// and secondarray. There were no errors. My guess is that firstarray
// and secondarray are stored contiguously in memory, so it just gets
// whatever is next in memory. Perhaps this is similar to the behavior
// mentioned previously, where there is no compile time error thrown
// with out-of-range accesses to arrays.
int main() {
    int firstarray[] = {5, 10, 15};
    int secondarray[] = {2, 4, 6, 8, 10};
    printarray (firstarray, 3); // Bizarre behavior when you change this to 8...
    printarray (secondarray, 5);
    return 0;
}