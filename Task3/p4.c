#include <string.h>
#include <stdio.h>
int main() {
    char s1[30];
    int i,count;
    printf("Enter a string:");
    gets(s1);
    for(i=0;s1[i]!='\0';i++){
        count++;
    }
    printf("The length of the string is %d ",count);
    return 0;
}
