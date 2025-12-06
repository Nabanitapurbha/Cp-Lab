
//Given two strings s and t, determine whether t is an anagram of s. An anagram is a word formed by rearranging the letters of another word, using all the original letters exactly once.

//Return "YES" if t is an anagram of s, otherwise return "NO"

#include <iostream>
#include <string>
using namespace std;

string isAnagram(string s, string t) {
    if(s.size() != t.size())
        return "NO";

    int freqS[256] = {0};
    int freqT[256] = {0};

    for(char c : s)
        freqS[c]++;

    for(char c : t)
        freqT[c]++;

    for(int i = 0; i < 256; i++)
        if(freqS[i] != freqT[i])
            return "NO";

    return "YES";
}

int main() {
    string s, t;
    cin >> s >> t;

    cout << isAnagram(s, t);

    return 0;
}
