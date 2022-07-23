// exceptions
#include <iostream>
using namespace std;

// Below, we just throw 20, and it gets caught into e in the catch
// statement. The type of the catch parameter matters because if the
// type is different, the exception won't get caught. Multiple handlers
// can be chained, each one with a different parameter type, and only
// the handler whose argument type matches the type of the exception
// specified in the throw statement is executed. If an ellipsis (...) is
// used as the parameter of catch, that handler will catch any exception
// no matter what the type of the exception thrown. This can be used as
// the default handler. If other exceptions were already thrown and
// caught by other handlers though, it will not catch those that were
// already caught. After an exception has been thrown, resume execution
// after the try-catch, not after the throw statement. Nesting of
// try-catch blocks within more external try blocks is also allowed. In
// such a case, you would need to put a "throw;" within the inner catch
// block.

int main() {
    try {
        throw 20;
    }
    catch (int e) {
        cout << "An exception occurred. Exception Nr. " << e << '\n';
    }
    return 0;
}