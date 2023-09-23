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
/////////////////////////////////

#include <stdio.h>
int main() {
    int a,i=1,b;
    printf("Enter No:");
    scanf("%d",&a);
    while(i<=a/2)
    {
      b=(i*2);
      i++;
      printf("%d\t",b);
    }
    return 0;
}
