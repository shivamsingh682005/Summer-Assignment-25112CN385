#include<stdio.h>
#include<math.h>
int main(){
    int num,original,digit,sum=0,digits=0;
    printf("enter the number: ");
    scanf("%d", &num);
    
    
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
            printf("%d is an Armstrong number.\n", num);
        else
            printf("%d is not an Armstrong number.\n", num);
    
    return 0;
}