#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Fibonacci is not defined for negative numbers." << endl;
        return 1;
    }
    
    long long a = 0, b = 1, temp;
    if (num == 0) {
        cout << "Fibonacci of 0 is: 0" << endl;
        return 0;
    }
    
    for (int i = 2; i <= num; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    
    cout << "Fibonacci of " << num << " is: " << b << endl;
    return 0;
}
