//Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

#include <stdio.h>
int romanToInt(char *s) {
    int total = 0, i = 0;

    while (s[i] != '\0') {
        char c = s[i];

        if (c == 'I') {
            if (s[i + 1] == 'V') { total += 4; i++; }
            else if (s[i + 1] == 'X') { total += 9; i++; }
            else total += 1;
        }
        else if (c == 'V') total += 5;
        else if (c == 'X') {
            if (s[i + 1] == 'L') { total += 40; i++; }
            else if (s[i + 1] == 'C') { total += 90; i++; }
            else total += 10;
        }
        else if (c == 'L') total += 50;
        else if (c == 'C') {
            if (s[i + 1] == 'D') { total += 400; i++; }
            else if (s[i + 1] == 'M') { total += 900; i++; }
            else total += 100;
        }
        else if (c == 'D') total += 500;
        else if (c == 'M') total += 1000;

        i++;
    }

    return total;
}

int main() {
    char roman[20];
    printf("Enter Roman numeral: ");
    scanf("%s", roman);

    int result = romanToInt(roman);
    printf("Integer value: %d\n", result);

    return 0;
}

