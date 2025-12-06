// Write a program to check if the given number
//N is Armstrong number.

//Note: Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.(codechef)


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, digits = 0, sum = 0;
    cin >> n;

    temp = n;
    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while(temp > 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }

    if(sum == n)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}
