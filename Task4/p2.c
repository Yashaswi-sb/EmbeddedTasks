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
    for(i=0;s2[i]!='\0';i++){
        if(s1[i]!=s2[i]){
             count=1;
             break;
        }
    }
    if(count==1)
    printf("Two strings are different!");
    else
    printf("Two strings are same!");
    return 0;
}
