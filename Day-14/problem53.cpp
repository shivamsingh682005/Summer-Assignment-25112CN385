#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid size\n";
        return 0;
    }

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int index = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    if (index >= 0) {
        cout << "Element found at index " << index << "\n";
    } else {
        cout << "Element not found\n";
    }

    return 0;
}
