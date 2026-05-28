#include<stdio.h>
int main(){

int n;
printf("enter the number");
scanf("%d" ,&n);

printf("the multiplication table of %d is" ,n);
for(int i=1;i<=10;i++){

    printf("%d * %d =%d", n,i,n*i);
    printf("\n");
}
return 0;

}

