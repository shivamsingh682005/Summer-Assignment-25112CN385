#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str, word;
    int count = 0;

    cout << "Enter sentence: ";
    getline(cin, str);

    stringstream ss(str);

    while(ss >> word) {
        count++;
    }

    cout << "Total Words = " << count;

    return 0;
}