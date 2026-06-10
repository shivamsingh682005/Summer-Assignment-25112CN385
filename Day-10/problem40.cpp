#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=0;j<i;j++){
        cout<<char('A'+j)<<" ";
    }
    for(int j=i-2;j>=0;j--){
        cout<<char('A'+j)<<" ";
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