#include<bits/stdc++.h>
using namespace std;

void palindromeNum(int n){
    int reverse=0;
    int original=n;
    int digit;
    while(n>0){
        digit=n%10;
        reverse=reverse*10 + digit;
        n=n/10;
    }
    if(original==reverse)
        cout<<"palindrome";
        else
        cout<<"not palindrome";
}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    palindromeNum(n);
}