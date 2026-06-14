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
    map<int,int>freq;

    for(int x:arr){
        freq[x]++;
    }
    cout<<"duplicate elements: ";

    for(auto x:freq){
        if(x.second>1){
            cout<<x.first<<" ";
        }
    }
    return 0;
}