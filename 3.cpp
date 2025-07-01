#include <iostream>
using namespace std;


void reverseString(string str) {
    if (str.length() == 0) return;      

    reverseString(str.substr(1));      
    cout << str[0];                  
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "Reversed string: ";
    reverseString(input);  
    cout << endl;

    return 0;
}
