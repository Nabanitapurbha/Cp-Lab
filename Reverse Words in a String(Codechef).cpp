//You are given a string S consisting of English letters (uppercase and lowercase), digits, and spaces ' '. The string may contain leading or trailing spaces, or multiple spaces between words.
//Your task is to reverse the order of the words in the string. A word is defined as a sequence of non-space characters.

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;33
int main() {
    string S;
    getline(cin, S);
    stringstream ss(S);
    vector<string> words;
    string word;
    while (ss >> word) {
        words.push_back(word);
    }
    for (int i = words.size() - 1; i >= 0; i--) {
        cout << words[i];
        if (i > 0) cout << " ";
    }

    return 0;
}

