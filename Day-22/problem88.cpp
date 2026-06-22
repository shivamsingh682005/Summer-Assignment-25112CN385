#include <iostream>
using namespace std;

int main() {
    string str, result = "";

    cout << "Enter string: ";
    getline(cin, str);

    for(char ch : str) {
        if(ch != ' ')
            result += ch;
    }

    cout << "After removing spaces = " << result;

    return 0;
}