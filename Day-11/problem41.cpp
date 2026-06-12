#include<bits/stdc++.h>
using namespace std;

int findSum(int a, int b){
    int c=a+b;
    return c;
}
int main(){
    int a,b,c,sum;
    cout<<"enter two numbers :";
    cin>>a>>b;
    sum=findSum(a,b);
    cout<<"Sum ="<<sum;
}