//Given a string s consisting of words and spaces, return the length of the last word in the string.(LeetCode)

#include <stdio.h>
#include <string.h>
int main() {
    char s[200];
    int len, count = 0;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    len = strlen(s) - 1;
    if (s[len] == '\n') {
        s[len] = '\0';
        len--;
    }
    while (len >= 0 && s[len] == ' ')
        len--;
    while (len >= 0 && s[len] != ' ') {
        count++;
        len--;
    }
    printf("Length of last word = %d\n", count);
    return 0;
}

