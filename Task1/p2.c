#include <stdio.h>
int main() {
   int a,i,j;
   printf("Enter No:");
   scanf("%d",&a);
   for(i=0;i<a;i++)
   {
       for(j=0;j<a;j++)
       {
           printf("1");
         //printf("%d%d",i,j);
        }
        printf("\n");
    }
    return 0;
}
