#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }
    
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    
    cout << "Factorial of " << num << " is: " << fact << endl;
    return 0;
}
