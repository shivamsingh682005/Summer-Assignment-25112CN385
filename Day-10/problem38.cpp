#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
        cout<<" ";
    }

        for(int j=1;j<2*i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number of rows: ";
    cin>>n;
    pattern(n);
}