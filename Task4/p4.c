#include <string.h>
#include <stdio.h>
int main() {
    char s1[50],s2[50],s3[50];
    int i,count,l1,l2,j,k=0,l,l3;
    printf("Enter the string:");
    gets(s1);
    printf("Enter the substring:");
    gets(s2);
    printf("Enter the substring to be replaced:");
    gets(s3);
    l1=strlen(s1);
    l2=strlen(s2);
    l3=strlen(s3);
    for(i=0;i<1;i++){
        for(j=k;j<(l1+l3)-l2;j++){
            if(s2[i]==s1[j]){
               s1[j]=s3[i];
                k=j;
                i++;
                count=1;
            }
            else{
                count=0;
            }
        }
    }
    if(count==1)
    printf("The Final string is '%s'",s1);
    else
    printf("The substring is NOT found in main string!");
    return 0;
}
