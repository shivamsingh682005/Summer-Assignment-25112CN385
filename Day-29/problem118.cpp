#include <iostream>
using namespace std;

int main() {
    int arr[5], choice, sum = 0;

    cout << "Enter 5 Elements:\n";
    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "1.Display\n2.Sum\n";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Array: ";
            for(int i = 0; i < 5; i++)
                cout << arr[i] << " ";
            break;

        case 2:
            for(int i = 0; i < 5; i++)
                sum += arr[i];
            cout << "Sum = " << sum;
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}