//Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.(codechef).


#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int A, B;
    cin >> A >> B;
    int GCD = gcd(A, B);
    int LCM = (A * B) / GCD;
    cout << "GCD: " << GCD << endl;
    cout << "LCM: " << LCM << endl;

    return 0;
}
