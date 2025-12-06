// Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.
//Your task is simple. Given a string, you need to tell if it is a lapindrome.(codechef).

#include <iostream>
#include <string>
using namespace std;

bool isLapindrome(string s) {
    int n = s.size();
    int freq1[26] = {0};
    int freq2[26] = {0};
    int mid = n / 2;
    for(int i = 0; i < mid; i++)
        freq1[s[i] - 'a']++;
    for(int i = (n % 2 == 0 ? mid : mid + 1); i < n; i++)
        freq2[s[i] - 'a']++;
    for(int i = 0; i < 26; i++)
        if(freq1[i] != freq2[i])
            return false;
    return true;
}
int main() {
    string s;
    cin >> s;

    if(isLapindrome(s))
        cout << "Lapindrome";
    else
        cout << "Not a Lapindrome";
    return 0;
}

