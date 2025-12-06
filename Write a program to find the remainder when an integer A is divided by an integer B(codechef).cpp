//Write a program to find the remainder when an integer A is divided by an integer B(codechef).

#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int remainder = A % B;
    cout << remainder;

    return 0;
}

