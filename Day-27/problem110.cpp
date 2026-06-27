#include <iostream>
#include <string>
using namespace std;

int main() {
    int id;
    string name;
    float salary;

    cout << "Enter Employee ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "\n----- Employee Details -----\n";
    cout << "ID : " << id << endl;
    cout << "Name : " << name << endl;
    cout << "Salary : " << salary << endl;

    return 0;
}