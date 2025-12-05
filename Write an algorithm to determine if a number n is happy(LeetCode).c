//Write an algorithm to determine if a number n is happy. A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits. Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy. Return true if n is a happy number, and false if not

#include <stdio.h>
#define MAX 1000
int sumOfSquares(int n) {
    int sum = 0, digit;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}
int isHappy(int n) {
    int seen[MAX];
    int count = 0;

    while (n != 1) {
        for (int i = 0; i < count; i++) {
            if (seen[i] == n)
                return 0;
        }
        if (count < MAX)
            seen[count++] = n;
        else
            return 0;
        n = sumOfSquares(n);
    }

    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isHappy(n))
        printf("%d is a Happy Number.\n", n);
    else
        printf("%d is not a Happy Number.\n", n);

    return 0;
}
