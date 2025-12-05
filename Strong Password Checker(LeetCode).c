//A password is said to be strong if it satisfies all the following criteria:

//It has at least 8 characters.
//It contains at least one lowercase letter.
//It contains at least one uppercase letter.
//It contains at least one digit.
//It contains at least one special character. The special characters are the characters in the following string: "!@#$%^&*()-+".
//It does not contain 2 of the same character in adjacent positions (i.e., "aab" violates this condition, but "aba" does not).
//Given a string password, return true if it is a strong password. Otherwise, return false.

#include <stdio.h>
#include <string.h>
int isStrongPassword(char password[]) {
    int length = 0;
    int hasLower = 0, hasUpper = 0, hasDigit = 0, hasSpecial = 0;
    char special[] = "!@#$%^&*()-+";
    for(int i = 0; password[i] != '\0'; i++) {
        length++;
        char c = password[i];
        if(c >= 'a' && c <= 'z') hasLower = 1;
        else if(c >= 'A' && c <= 'Z') hasUpper = 1;
        else if(c >= '0' && c <= '9') hasDigit = 1;
        else {
            for(int j = 0; special[j] != '\0'; j++) {
                if(c == special[j]) {
                    hasSpecial = 1;
                    break;
                }
            }
        }
        if(i > 0 && password[i] == password[i-1])
            return 0;
    }
    if(length < 8) return 0;
    return hasLower && hasUpper && hasDigit && hasSpecial;
}
int main() {
    char password[100];
    printf("Enter password: ");
    scanf("%s", password);

    if(isStrongPassword(password))
        printf("Strong Password\n");
    else
        printf("Weak Password\n");
    return 0;
}

