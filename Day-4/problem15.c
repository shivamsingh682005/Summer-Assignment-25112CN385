#include<stdio.h>
#include<math.h>
int main(){
    int n,original,digit,sum=0,digits=0;

    printf("enter the number to be checked: ");
    scanf("%d", &n);

    original=n;

    while(original!=0)//for counting digits
    {
     digits++;
     original=original/10;
    }

    original=n;

    while(original!=0)//calculating armstrong number
    {
     digit=original%10;
     sum=sum+pow(digit,digits);
     original=original/10;
    }

    if(sum==n)
    printf("number is armstrong");
    else
    printf("number is not armstrong");

    return 0;
    }