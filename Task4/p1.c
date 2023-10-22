#include <string.h>
#include <stdio.h>
int main() {
    char s1[30],s2[30];
    int i,count,l1,l2;
    char ch;
    printf("Enter the string 1:");
    gets(s1);
    printf("Enter the string 2:");
    gets(s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<l2;i++){
        s1[l1+i]=s2[i];
    }
    printf("String 1: %s\n",s1);
    printf("String 2: %s ",s2);
    return 0;
}
