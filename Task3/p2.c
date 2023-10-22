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
            printf("Number of occurrence of '%c' is %d",letter,i);
            break;
        }
    }
    if(flag!=1)
        {
            printf("Letter not found in the String!");
        }
    return 0;
}
