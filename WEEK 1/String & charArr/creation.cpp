#include <iostream>
using namespace std;

int findLen(char ch2[], int size){
    int length = 0;
    for(int i = 0; i < size; i++){
        if(ch2[i] == '\0')
            break;
        
        length++;
    }
    return length;
}

void reverseString(char ch3[], int n){
    int i = 0;
    int j = n - 1;

    while(i <= j){
        swap(ch3[i], ch3[j]);
        i++;
        j--;
    }
}

void convertToUppercase(char ch4[], int size){
    int index = 0;

    while(ch4[index] != '\0'){
        char curr = ch4[index];

        if(curr >= 'a' && curr <= 'z'){
            ch4[index] = curr - ('a' - 'A');
        }
        index++;
    }
}

int main() {
    // Creating a string using string literal
    string str1;
    cin >> str1;
    cout << "String 1: " << str1 << endl;

    char ch[100];
    cin.getline(ch, 100);
    cout << "Character Array: " << ch << endl;

    char ch2[100];

    cin >> ch2;
    int length = findLen(ch2, 100);
    cout << "Length of character array: " << length << endl;
    
    char ch3[100];
    cin.getline(ch3, 100);
    cout << "Before: " << ch3 << endl;
    reverseString(ch3, findLen(ch3, 100));
    cout << "After: " << ch3 << endl;   

    char ch4[100];
    cin.getline(ch4, 100);  
    cout << "Before Uppercase: " << ch4 << endl;
    convertToUppercase(ch4, 100);   
    cout << "After Uppercase: " << ch4 << endl;


    return 0;
}