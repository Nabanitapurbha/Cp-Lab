//Write a C++ program that calculates and prints the power of a number. Implement a function named power that takes two integers as arguments (base and exponent) and returns the result of base raised to the power of exponent.(codechef).


#include <iostream>
using namespace std;

int power(int base, int exponent) {
    int result = 1;

    for(int i = 1; i <= exponent; i++) {
        result = result * base;
    }

    return result;
}

int main() {
    int base, exponent;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    int ans = power(base, exponent);

    cout << base << " raised to the power " << exponent << " is: " << ans << endl;

    return 0;
}

