//Given an array A of size N, your task is to find and print all the peak elements in the array. A peak element is one that is strictly greater than its neighboring elements. For the first and last elements, only consider their single adjacent element.

//If no peak element exists in the array, print -1.(codechef)

#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int A[1000];
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int printed = 0;
    for(int i = 0; i < N; i++) {
        if(i == 0) {
            if(N == 1 || A[i] > A[i+1]) {
                cout << A[i] << " ";
                printed = 1;
            }
        }
        else if(i == N-1) {
            if(A[i] > A[i-1]) {
                cout << A[i] << " ";
                printed = 1;
            }
        }
        else {
            if(A[i] > A[i-1] && A[i] > A[i+1]) {
                cout << A[i] << " ";
                printed = 1;
            }
        }
    }
    if(printed == 0) cout << -1;
    cout << endl;
    return 0;
}

