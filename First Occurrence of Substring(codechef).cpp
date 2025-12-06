//You are given two strings — haystack and needle.
//Your task is to find the index (0-based) of the first occurrence of needle in haystack.

//If needle does not appear in haystack, print -1.(codechef).

#include <iostream>
#include <string>
using namespace std;

int main() {
    string haystack, needle;
    cin >> haystack >> needle;

    size_t pos = haystack.find(needle);

    if(pos != string::npos)
        cout << pos;
    else
        cout << -1;

    return 0;
}

