#include <iostream>
using namespace std;

int main() {
    string name;
    int seats;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Number of Seats: ";
    cin >> seats;

    cout << "\nTicket Booked Successfully!\n";
    cout << "Passenger: " << name << endl;
    cout << "Seats: " << seats << endl;

    return 0;
}