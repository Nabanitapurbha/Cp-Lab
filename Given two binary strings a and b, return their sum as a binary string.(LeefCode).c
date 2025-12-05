//Given two binary strings a and b, return their sum as a binary string.

#include <stdio.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    static char result[1000];
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int k = 0;
    int carry = 0;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }
    result[k] = '\0';
    for (int x = 0, y = k - 1; x < y; x++, y--) {
        char temp = result[x];
        result[x] = result[y];
        result[y] = temp;
    }
    return result;
}
int main() {
    char a[100], b[100];
    printf("Enter binary string a: ");
    scanf("%s", a);
    printf("Enter binary string b: ");
    scanf("%s", b);

    printf("Sum = %s\n", addBinary(a, b));
    return 0;
}
