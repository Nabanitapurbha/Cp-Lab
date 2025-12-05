//Find the repeating and missing number
//You are given multiple test cases. Each test case consists of an integer array arr of size n, containing numbers in the range [1, n]. In each test case:

//Exactly one number appears twice (the repeating number).
//Exactly one number is missing from the range [1, n].
//Your task is to return the result for each test case as an array of size 2:

//The first element is the repeating number.
//The second element is the missing number.(codechef)

#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        int arr[1000];
        int count[1001] = {0};
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            count[arr[i]]++;  // increase count
        }
        int repeating = -1, missing = -1;
        for(int i = 1; i <= n; i++) {
            if(count[i] == 2) repeating = i;
            if(count[i] == 0) missing = i;
        }
        cout << repeating << " " << missing << endl;
    }

    return 0;
}
