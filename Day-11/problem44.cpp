#include<bits/stdc++.h>
using namespace std;

void factNum(int n){
    int a=1;
    for(int i=1;i<=n;i++){
         a =a*i;
    }
    cout<<"Factoriol of number is "<< a;
}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    factNum(n);
}