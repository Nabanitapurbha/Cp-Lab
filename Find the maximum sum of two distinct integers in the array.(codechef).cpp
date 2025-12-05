//Find the maximum sum of two distinct integers in the array.(codechef).

#include <iostream>
#include <climits>
using namespace std;
int main() {
    int N;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int max1 = INT_MIN, max2 = INT_MIN;
    for(int i = 0; i < N; i++) {
        if(A[i] > max1) {
            max2 = max1;
            max1 = A[i];
        }
        else if(A[i] > max2 && A[i] != max1) {
            max2 = A[i];
        }
    }
    cout << (max1 + max2) << endl;

    return 0;
}

