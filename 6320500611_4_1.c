#include <stdio.h>
int main()
{
    int x=1,n,i,j,set[3] ={4,2,1};

    scanf("%d",&n);

    int th[n][3],sc[n],ssc[n];

    for(i=0;i<n;i++)
    {
        sc[i] = 0;
        ssc[i] = 0;
        for(j=0;j<3;j++)
        {
            scanf("%d",&th[i][j]);
            sc[i] += (th[i][j]*set[j]);
        }
    }
    for(i=2,j=0;i<n;i+=3,j++)
    {
        ssc[j] += sc[i]+sc[i-1]+sc[i-2];
        printf("%d ",ssc[j]);
    }
}
