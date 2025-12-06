//Chef has scored A,B, and C in 3 different subjects respectively.Chef will fail if the average score of any two subjects is less than 35.Determine whether Chef will pass or fail.


#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if ((A + B) / 2.0 < 35 || (B + C) / 2.0 < 35 || (A + C) / 2.0 < 35) {
        cout << "Fail" << endl;
    } else {
        cout << "Pass" << endl;
    }
    return 0;
}
