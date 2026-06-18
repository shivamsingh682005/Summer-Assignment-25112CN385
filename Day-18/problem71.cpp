#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int target;

    cout << "Enter number to search: ";
    cin >> target;

    if(binary_search(arr, arr + n, target))
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}