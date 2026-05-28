#include<stdio.h>
int main(){
    int n,digit=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        digit++;
    }
    printf("number of digits in the number is %d", digit);
    return 0;
}