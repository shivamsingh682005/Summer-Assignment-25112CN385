#include<bits/stdc++.h>
using namespace std;

void armStrong(int num){
    int original,sum,digit,digits;
    original=num;
        sum=0;
        digits=0;

        while(original!=0)
        {
            digits++;
            original=original/10;
        }

        original=num;

        while(original!=0)
        {
            digit=original%10;
            sum=sum+(round(pow(digit,digits)));
            original=original/10;
        }
        if(sum==num)
        cout<<"armstrong";
        else
        cout<<"not armstrong";
    
}
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    armStrong(num);
}