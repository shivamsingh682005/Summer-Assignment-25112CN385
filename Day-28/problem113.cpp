#include <iostream>
using namespace std;

int main() {
    string book;
    int id;

    cout << "Enter Book ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Book Name: ";
    getline(cin, book);

    cout << "\n--- Library Record ---\n";
    cout << "Book ID: " << id << endl;
    cout << "Book Name: " << book << endl;

    return 0;
}