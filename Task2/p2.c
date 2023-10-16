#include <stdio.h>
int main() {
    int a[10],i,sum=0,n;
    printf("Enter number of Array Elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("sum of two array numbers are:\n");
    for(i=0;i<n;i++)
    {
       a[i]=a[i]+15;
        printf("%d\n",a[i]);
    }
    return 0;
}
