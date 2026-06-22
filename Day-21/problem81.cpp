#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    int len = 0;

    for(char ch : str) {
        len++;
    }

    cout << "Length = " << len;

    return 0;
}