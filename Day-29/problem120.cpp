#include <iostream>
using namespace std;

int main() {
    int id, quantity;
    string item;

    cout << "Enter Item ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Item Name: ";
    getline(cin, item);

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "\n--- Inventory ---\n";
    cout << "Item ID: " << id << endl;
    cout << "Item Name: " << item << endl;
    cout << "Quantity: " << quantity << endl;

    return 0;
}