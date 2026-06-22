#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str, temp;

    cout << "Enter string: ";
    getline(cin, str);

    temp = str;
    reverse(temp.begin(), temp.end());

    if(str == temp)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}