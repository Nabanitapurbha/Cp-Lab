//Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator(LeetCode)

#include <stdio.h>
int main() {
    int dividend, divisor;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    if (divisor == 0) {
        printf("Cannot divide by zero!\n");
        return 0;
    }
    int sign = 1;
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
        sign = -1;
    int a = dividend > 0 ? dividend : -dividend;
    int b = divisor > 0 ? divisor : -divisor;

    int quotient = 0;
    while (a >= b) {
        a -= b;
        quotient++;
    }
    quotient = quotient * sign;
    printf("Result = %d\n", quotient);
    return 0;
}

