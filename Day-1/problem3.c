#include<stdio.h>
int main(){

int n,a=1;
printf("enter a number \n");
scanf("%d", &n);

for(int i=1;i<=n;i++){
a=a*i;
   
  }
  printf("factorial of %d is %d",n,a);
   return 0;

}
