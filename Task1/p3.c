#include <stdio.h>
int main() {
   int a,i,j,b;
   printf("Enter No:");
   scanf("%d",&a);
   for(i=1;i<=a;i++)
   {
       for(j=1;j<=a;j++)
       {
           b=j+i;
           printf("%d\t",b);
        }
        printf("\n");
    }
    return 0;
}
