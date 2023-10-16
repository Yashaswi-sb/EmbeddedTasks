#include <stdio.h>
int main() {
    int a[10],i,sume=0,sumo=0,n;
    printf("Enter number of Array Elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]%2==0)
        {
            sume=sume+a[i];
        }
       else
        {
            sumo=sumo+a[i];
        }
    }
     printf("sum of even numbers=%d\n",sume);
     printf("sum of odd numbers=%d",sumo);
    return 0;
}
