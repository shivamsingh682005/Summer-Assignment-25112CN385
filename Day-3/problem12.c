#include<stdio.h>
int main(){
   int a,b,max;

    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);

    max=(a>b)?a:b;

    while(1){
        if(max%a==0 && max%b==0){
            break;
        }
        max++;
    }
    printf("the LCM of %d and %d is %d",a,b,max);
    return 0;
}
