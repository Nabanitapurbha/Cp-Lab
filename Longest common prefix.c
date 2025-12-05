
//Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".

#include <stdio.h>
#include <string.h>
void longestCommonPrefix(char strs[][100], int n, char *result) {
    if (n == 0) {
        result[0] = '\0';
        return;
    }

    strcpy(result, strs[0]); // Start with the first string

    for (int i = 1; i < n; i++) {
        int j = 0;
        while (result[j] != '\0' && strs[i][j] != '\0' && result[j] == strs[i][j]) {
            j++;
        }
        result[j] = '\0';
    }
}

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char strs[n][100];
    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", strs[i]);
    }

    char result[100];
    longestCommonPrefix(strs, n, result);

    if (strlen(result) == 0) {
        printf("No common prefix.\n");
    } else {
        printf("Longest common prefix: %s\n", result);
    }

    return 0;
}
