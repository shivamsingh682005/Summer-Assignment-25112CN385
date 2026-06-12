#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[], int n){
    int max = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = findMax(arr, n);

    cout << "Maximum element = " << ans;

    return 0;
}