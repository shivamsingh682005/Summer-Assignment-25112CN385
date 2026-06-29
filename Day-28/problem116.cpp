#include <iostream>
using namespace std;

int main() {
    string name;
    long long phone;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Phone Number: ";
    cin >> phone;

    cout << "\n--- Contact Details ---\n";
    cout << "Name: " << name << endl;
    cout << "Phone: " << phone << endl;

    return 0;
}