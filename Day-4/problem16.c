#include<stdio.h>
#include<math.h>
int main(){
    int start,end,num,original,digit,sum=0,digits=0;
    printf("enter the starting number: ");
    scanf("%d", &start);

    printf("enter the ending number: ");
    scanf("%d", &end);

    for(num=start; num<=end; num++)
    {
    

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
            printf("%d ", num);
    }
    return 0;
}