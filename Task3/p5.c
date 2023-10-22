#include <string.h>
#include <stdio.h>
int main() {
    char s1[30],s2[30];
    int i,count;
    printf("Enter the string 1:");
    gets(s1);
    printf("Enter the string 2:");
    gets(s2);
    for(i=0;s2[i]!='\0';i++){
        s1[i]=s2[i];
    }
    printf("String 1: %s\n",s1);
    printf("String 2: %s ",s2);
    return 0;
}
