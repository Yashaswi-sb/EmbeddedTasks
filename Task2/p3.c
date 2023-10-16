#include <stdio.h>
int main() {
    int a[15],b[15],i,n,c[15];
    printf("Enter number of Array Elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number %d of array 1:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Enter the number %d of array 2:",i+1);
        scanf("%d",&b[i]);
    }
    printf("sum of two array numbers are:\n");
    for(i=0;i<n;i++)
    {
       c[i]=a[i]+b[i];
        printf("%d\n",c[i]);
    }
    return 0;
}
