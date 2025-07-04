#include <iostream>
using namespace std;


int power(int a, int b) {
    if (b == 0) return 1;        
    return a * power(a, b - 1);  
}

int main() {
    int a, b;
    cout << "Enter number and exponent: ";
    cin >> a >> b;

    int result = power(a, b);
    cout << a << "^" << b << " = " << result << endl;

    return 0;
}
