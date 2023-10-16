#include <stdio.h>
int main() {
    int a[15],i,n,b[15];
    printf("Enter number of Array Elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("The Inverted array elements are:\n");
    for(i=n-1;i>=0;i--)
    {
        b[i]=a[i];
        printf("%d\n",b[i]);
    }
    return 0;
}
