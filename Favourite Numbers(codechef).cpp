// Favourite Numbers
//Alice likes numbers which are even, and are a multiple of 7.
//Bob likes numbers which are odd, and are a multiple of 9.
//Alice, Bob, and Charlie find a number A

//If Alice likes AAlice takes home the number.
//If Bob likes A, Bob takes home the number.
//if both Alice and Bob don't like the number, Charlie takes it home.
//Given A, find who takes it home.

#include <iostream>
using namespace std;

int main() {
    int A;
    cin >> A;

    if(A % 2 == 0 && A % 7 == 0)
        cout << "Alice";
    else if(A % 2 != 0 && A % 9 == 0)
        cout << "Bob";
    else
        cout << "Charlie";

    return 0;
}

