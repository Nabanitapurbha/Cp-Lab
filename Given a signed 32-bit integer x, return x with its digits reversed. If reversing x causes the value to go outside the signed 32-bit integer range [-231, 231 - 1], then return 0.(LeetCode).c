//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#include <stdio.h>
int reverse(int x) {
    long rev = 0;
    while (x != 0) {
        int digit = x % 10;
        rev = rev * 10 + digit;
        if (rev > 2147483647 || rev < -2147483648) {
            return 0;
        }

        x /= 10;
    }

    return (int)rev;
}

int main() {
    int x;
    printf("Enter number: ");
    scanf("%d", &x);

    printf("Reversed number = %d\n", reverse(x));
    return 0;
}

