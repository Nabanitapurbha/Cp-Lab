//Check if a string is a substring of another

//Given two strings, S1 and S2, your task is to determine whether S2 is a substring of S1. If S2 is a substring of S1, print "YES". Otherwise, print "NO".
//A substring is a contiguous sequence of characters within a string. For example, "abc" is a substring of "aabcda", but "ac" is not a contiguous sequence in "aabcda".

#include <iostream>
#include <string>
using namespace std;
int main() {
    int T;
    cin >> T;
    cin.ignore();
    while(T--) {
        string S1, S2;
        getline(cin, S1);
        getline(cin, S2);

        if(S1.find(S2) != string::npos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

