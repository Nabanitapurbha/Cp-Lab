//Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.(LeetCode).

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num >= 10) { // repeat until single digit
        int sum = 0;
        int temp = num;
        while (temp > 0) {
            sum += temp % 10;  // add last digit
            temp /= 10;        // remove last digit
        }
        num = sum; // update num
    }

    printf("The single-digit result is: %d\n", num);

    return 0;
}
