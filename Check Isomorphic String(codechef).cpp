
//You are given two strings, S and T. Determine whether these two strings are isomorphic.

//Two strings are isomorphic if characters in S can be replaced to get T. All occurrences of a character must be replaced with another character while preserving the order. No two characters may map to the same character, but a character may map to itself.(codechef).


#include <iostream>
#include <string>
using namespace std;

bool isIsomorphic(string s, string t) {
    if(s.size() != t.size())
        return false;
    char mapS[256] = {0};
    char mapT[256] = {0};
    for(int i = 0; i < s.size(); i++) {
        char c1 = s[i];
        char c2 = t[i];
        if(mapS[c1] == 0 && mapT[c2] == 0) {
            mapS[c1] = c2;
            mapT[c2] = c1;
        }
        else {
            if(mapS[c1] != c2 || mapT[c2] != c1)
                return false;
        }
    }
    return true;
}

int main() {
    string s, t;
    cin >> s >> t;

    if(isIsomorphic(s, t))
        cout << "Isomorphic";
    else
        cout << "Not Isomorphic";

    return 0;
}
