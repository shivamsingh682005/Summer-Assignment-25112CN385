#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int roll;
    float m1, m2, m3, total, percentage;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Marks of Subject 1: ";
    cin >> m1;

    cout << "Enter Marks of Subject 2: ";
    cin >> m2;

    cout << "Enter Marks of Subject 3: ";
    cin >> m3;

    total = m1 + m2 + m3;
    percentage = total / 3;

    cout << "\n----- Marksheet -----\n";
    cout << "Name       : " << name << endl;
    cout << "Roll No    : " << roll << endl;
    cout << "Subject 1  : " << m1 << endl;
    cout << "Subject 2  : " << m2 << endl;
    cout << "Subject 3  : " << m3 << endl;
    cout << "Total      : " << total << endl;
    cout << "Percentage : " << percentage << "%" << endl;

    if (percentage >= 33)
        cout << "Result     : Pass";
    else
        cout << "Result     : Fail";

    return 0;
}