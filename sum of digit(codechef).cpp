//You're given an integer N. Write a program to calculate the sum of all the digits of N.


#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter an integer: ";
    cin >> N;
    int sum = 0;
    int temp = N;
    if (temp < 0) {
        temp = -temp;
    }
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    cout << "Sum of digits of " << N << " is " << sum << endl;
    return 0;
}
