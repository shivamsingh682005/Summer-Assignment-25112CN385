#include<stdio.h>
int main(){
    int start,end,i,j;
    printf("enter the starting number: ");
    scanf("%d",&start);

    printf("enter the ending number: ");
    scanf("%d",&end);

    for(i=start;i<=end;i++){
        if(i<=1){
            continue;
        }
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            printf("%d ",i);
        }
    }
    return 0;
}