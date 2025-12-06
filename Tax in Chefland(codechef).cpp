//In Chefland, a tax of rupees 10 is deducted if the total income is strictly greater than rupees 100.
//Given that total income is X rupees, find out how much money you get.(codechef).

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int X;
        cin >> X;
        int money = (X > 100) ? X - 10 : X;
        cout << money << endl;
    }

    return 0;
}
