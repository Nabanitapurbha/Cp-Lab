//Write a program that uses a for-each loop to print the square of each element in an array, but skips elements greater than 10.(codechef).


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Squares of elements <= 10:\n";
    for(int x : arr) {
        if(x > 10)
            continue;
        cout << x * x << " ";
    }

    return 0;
}


