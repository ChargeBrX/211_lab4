#include <stdio.h>
#include <string.h>
int main()
{
    char word[200] ={},c;
    int i;

    scanf("%s",word);

    for(i=0;i<strlen(word)-1;i++)
    {
        if(word[i]!=word[i+1])
        {
            printf("%c",word[i]);
        }
    }
    i = strlen(word);
    printf("%c",word[i-1]);
}
