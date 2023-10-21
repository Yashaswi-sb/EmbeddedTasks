#include <string.h>
#include <stdio.h>
int main() {
    char s1[30];
    char letter;
    int i;
    printf("Enter a string:");
    gets(s1);
    printf("Enter the letter to be found:");
    scanf("%c",&letter);
    //printf("%c",letter);
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]==letter){
            printf("Index of first occurrence:%d",i);
        }
    }
    return 0;
}
