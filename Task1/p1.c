#include <stdio.h>
int main() {
   int a,i;
   printf("Enter No:");
   scanf("%d",&a);
   for(i=2;i<=a;i=i+2){
    printf("%d\t",i);
}
    return 0;
}
