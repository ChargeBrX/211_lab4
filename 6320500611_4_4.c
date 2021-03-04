#include <stdio.h>
#include <string.h>
int main()
{
    char set[1000];
    char ch[11][4] = {"i", "of", "the", "on" , "at", "for", "with","a", "an", "in" ,"and"};

    char *token ;
    int i,j;
    gets(set);

    token = strtok(set," ");
    while(token!=NULL)
    {
        printf("%s\n",token);
        token = strtok(NULL," ");

        for(i=0;i<11;i++)
        {
            if(strcmp(token,ch[i]) != 0)
            {
                j = 1;
            }
            else
            {
                j = 0;
                break;
            }
        }

        if(j==1)
        {
            printf("%c",toupper(token[0]));
        }
    }
    return 0;

}
