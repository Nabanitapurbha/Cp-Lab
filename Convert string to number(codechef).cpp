//You are given a string that represents a positive number. Your task is to write a program that converts this string into its numerical equivalent without using any in-built parsing, conversion libraries, or direct type casting methods. The string will not contain any leading zeros, decimals, or any non-numeric characters.(codechef).

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    long long num = 0;

    for (int i = 0; i < s.length(); i++) {
        int digit = s[i] - '0';
        num = num * 10 + digit;
    }

    cout << num << endl;

    return 0;
}
