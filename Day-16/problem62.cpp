#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_map<int,int> freq;

    int maxFreq = 0;
    int element;

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;

        if(freq[arr[i]] > maxFreq) {
            maxFreq = freq[arr[i]];
            element = arr[i];
        }
    }

    cout << "Maximum Frequency Element = " << element;
    
    return 0;
}