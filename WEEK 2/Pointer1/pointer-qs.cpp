#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int *ptr = &a;

    // a ki value me +1
    a = a + 1;

    // ptr ke address me +1
    ptr = ptr + 1;

    cout << "Value of a: " << a << endl;
    cout << "Address stored in ptr: " << ptr << endl;

    return 0;
}
