int main() {
    int a[15],i,n,b,flag;
    printf("Enter number of Array Elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be found:");
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(b==a[i]){
            flag=1;
        printf("Number was found at index %d\n",i);
        }
    }
    if(flag!=1)
        {
            printf("Number was NOT found");
        }
return 0;
}
