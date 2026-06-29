#include <iostream>
using namespace std;

int main() {
    string str;
    int choice;

    cin.ignore();

    cout << "Enter String: ";
    getline(cin, str);

    cout << "1.Length\n2.Display\n";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Length = " << str.length();
            break;

        case 2:
            cout << "String = " << str;
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}