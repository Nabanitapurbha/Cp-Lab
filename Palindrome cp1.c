
//Given an integer x, return true if x is a palindrome, and false otherwise.

#include <stdio.h>
int isPalindrome(int x) {
    if (x < 0) return 0;
    int original = x;
    int reversed = 0;
    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x = x / 10;
    }

    return original == reversed;
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}
