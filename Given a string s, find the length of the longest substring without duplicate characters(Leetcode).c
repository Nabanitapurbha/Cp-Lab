//Given a string s, find the length of the longest substring without duplicate characters(Leetcode)

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    int n = strlen(s);
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        int seen[256] = {0};
        int len = 0;

        for (int j = i; j < n; j++) {
            if (seen[(int)s[j]] == 1) {
                break;  // duplicate found
            } else {
                seen[(int)s[j]] = 1;
                len++;
            }
        }

        if (len > maxLen)
            maxLen = len;
    }
    printf("Length of longest substring without repeating characters = %d\n", maxLen);
    return 0;
}

