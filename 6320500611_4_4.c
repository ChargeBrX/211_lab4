#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char set[1000],se[1000];
    char ch[22][4] = {"i", "of", "the", "on", "at", "for", "with","a", "an", "in","and"};

    char *token;
    int i,j,x=1,y=1;

    scanf("%[^\n]s",se);
    for(i=0;i<1000;i++)
    {
        if(se[i]==' ')
        {
            set[i] = ' ';
        }
        else
        {
            set[i] = tolower(se[i]);
        }
    }

    if(strlen(se)<=1000)
    {
        token = strtok(set," ");

        while(token!=NULL)
        {
            if(x==1)
            {
                printf("%c",toupper(token[0]));
                x = 0;
            }
            else
            {

                for(i=0; i<11; i++)
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
            }

            if(j==1)
            {
                printf("%c",toupper(token[0]));
            }
            token = strtok(NULL," ");
        }
    }

    return 0;

}
