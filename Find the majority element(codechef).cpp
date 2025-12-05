//You are given an array arr containing n integers. Your task is to return the majority element.

//A majority element is defined as the element that occurs more than ⌊n / 2⌋ times. It is guaranteed that such an element always exists.


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000]; // assuming n <= 1000
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int candidate = arr[0];
    int count = 1;

    for(int i = 1; i < n; i++) {
        if(arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
        if(count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }

    cout << candidate << endl;

    return 0;
}
