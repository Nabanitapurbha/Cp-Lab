
//You are given a string S consisting of lowercase English letters. You can convert S into a palindrome by adding characters only at the beginning of the string.

//Your task is to find the shortest palindrome that can be obtained using this transformation.

#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(const string &s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main() {
    string S;
    cin >> S;

    int n = S.size();
    int end = n - 1;
    while (end >= 0) {
        if (isPalindrome(S.substr(0, end + 1)))
            break;
        end--;
    }
    string extra = S.substr(end + 1);
    reverse(extra.begin(), extra.end());

    cout << extra + S << endl;

    return 0;
}
