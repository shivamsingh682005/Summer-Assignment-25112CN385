#include<stdio.h>
int main(){
   int i,n;

   printf("Enter the number of rows: ");
   scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(char ch='A';ch<'A'+i;ch++){
            printf("%c ",ch);
        }
        printf("\n");
    }

return 0;

}