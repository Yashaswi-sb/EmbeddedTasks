#include <string.h>
#include <stdio.h>
int main() {
    char s1[30];
    char letter;
    int i,flag;
    printf("Enter a string:");
    gets(s1);
    printf("Enter the letter to be found:");
    scanf("%c",&letter);
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]==letter){
            flag=1;
            printf("Index of first occurrence:%d",i);
        }
    }
    if(flag!=1)
        {
            printf("Letter was NOT found");
        }
    return 0;
}
