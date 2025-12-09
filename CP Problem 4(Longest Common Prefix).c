
//Given a list of strings, find the longest common prefix among them. If there is none,
//return an empty string.
//Hints: Use horizontal scanning, vertical scanning, divide-and-conquer, or binary searchon prefix length. Consider edge cases (empty list, single string).

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("");
        return 0;
    }

    char arr[n][100];
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }
    char prefix[100];
    strcpy(prefix, arr[0]);

    for (int i = 1; i < n; i++) {
        int j = 0;
        while (prefix[j] != '\0' && arr[i][j] != '\0' && prefix[j] == arr[i][j]) {
            j++;
        }
        prefix[j] = '\0';
    }

    printf("%s", prefix);
    return 0;
}
