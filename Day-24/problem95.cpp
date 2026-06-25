#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s, word, longest = "";

    cout << "Enter sentence: ";
    getline(cin, s);

    stringstream ss(s);

    while (ss >> word) {
        if (word.length() > longest.length())
            longest = word;
    }

    cout << "Longest word: " << longest;

    return 0;
}