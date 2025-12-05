//Given a string s, return the longest palindromic substring in s(LeetCode)

#include <stdio.h>
#include <string.h>
int isPalindrome(char str[], int start, int end) {
    while(start < end) {
        if(str[start] != str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}

int main() {
    char s[100];
    printf("Enter string: ");
    gets(s);

    int n = strlen(s);
    int maxLen = 1, startIndex = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(isPalindrome(s, i, j) && (j - i + 1) > maxLen) {
                startIndex = i;
                maxLen = j - i + 1;
            }
        }
    }

    printf("Longest Palindromic Substring: ");
    for(int k = startIndex; k < startIndex + maxLen; k++) {
        printf("%c", s[k]);
    }

    return 0;
}

