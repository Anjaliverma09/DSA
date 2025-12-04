#include <iostream>
using namespace std;
// *ptr -> value present at address stored in ptr = a
// int* ptr -> pointer to an interger

int main(){
    int a = 5;
    int* ptr1 = &a;
    cout << "int pointer size: " << sizeof(*ptr1) << endl;
    
    char ch = 'k';
    char* ptr2 = &ch;

    cout << sizeof(ptr2);       //hmesha address store krre h(printing system type)
    cout << "char pointer size: " << sizeof(*ptr2);
}