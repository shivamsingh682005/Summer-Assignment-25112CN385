#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"enter size of an array: ";
    cin>>n;

    vector<int>arr(n);
    
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    cout<<"second largest element= "<<arr[n-2];
    return 0;
}