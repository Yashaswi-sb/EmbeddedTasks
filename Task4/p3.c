#include <string.h>
#include <stdio.h>
int main() {
    char s1[50],s2[50];
    int i,count,l1,l2,j,k=0,l;
    printf("Enter the string:");
    gets(s1);
    printf("Enter the substring:");
    gets(s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<1;i++){
        for(j=k;j<l1;j++){
            if(s2[i]==s1[j]){
                k=j;
                i++;
                l++;
                count=1;
            }
            else{
                count=0;
            }
        }
    }
    if(count==1)
    printf("The substring is present from the index %d",l1-l);
    else
    printf("The substring is NOT found in main string!");
    return 0;
}
