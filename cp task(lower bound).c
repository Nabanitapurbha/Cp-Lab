//Given a sorted array of nums and an integer x, write a program to find the lower bound of x.

//The lower bound algorithm finds the first and smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.

//If no such index is found, return the size of the array.

#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    int low = 0, high = n - 1, ans = n;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("%d", ans);
    return 0;
}
