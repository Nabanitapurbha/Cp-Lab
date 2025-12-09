//first-and-last-occurrence Given a sorted array and a target, return the first and
//last index of the target in the array. If target not found, return -1 -1.

#include <stdio.h>

int main() {
    int n, x, first = -1, last = -1;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            if (first == -1) first = i;
            last = i;
        }
    }

    printf("%d %d", first, last);

    return 0;
}
