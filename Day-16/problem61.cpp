#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number of elements: ";
    cin >> n;

    
    int arr[n];
    int sum = 0;
    

    for(int i = 0; i < n ; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;

    cout << "Missing Number = " << total - sum;

    return 0;
}