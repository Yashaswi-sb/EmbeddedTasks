#include <string.h>
#include <stdio.h>
int main() {
    char s1[30];
    char letter,ch;
    int i,j,flag;
    printf("Enter a string:");
    gets(s1);
    printf("Enter the index to be replaced:");
    scanf("%d",&j);
    printf("Enter the letter:");
    scanf(" %c",&letter);
   for(i=0;s1[i]!='\0';i++){
        if(i==j){
            if(letter!=s1[i]){
            ch=s1[i];
            s1[i]=letter;
            printf("Replaced '%c' with '%c'!\n",ch,letter);
            break;
            }
             else
             printf("Characters are same, Nothing got replaced!\n");
        }
    }
    printf("The Final String is '%s'",s1);
    return 0;
}
