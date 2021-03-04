#include <stdio.h>
int main()
{
    int x=1,n,i,j,set[3] = {4,2,1},max,min;

    scanf("%d",&n);

    int th[n][3],sc[n],ssc[n-2],best,bad=0;

    for(i=0; i<n; i++)
    {
        sc[i] = 0;
        ssc[i] = 0;
        for(j=0; j<3; j++)
        {
            scanf("%d",&th[i][j]);
            sc[i] += (th[i][j]*set[j]);
        }
    }
    for(i=0,j=0; i<n-2; i++,j++)
    {
        ssc[j] += sc[i]+sc[i+1]+sc[i+2];
    }

    max = ssc[0];
    best = 1;
    min = ssc[n-3];
    bad = n-2;

        for(i=1; i<n-2; i++)
        {
            if(max<ssc[i])
            {
                max = ssc[i];
                best = i+1;
            }
            if(min>ssc[i])
            {
                min = ssc[i];
                bad = i+1;
            }
        }

    printf("%d %d",best,bad);

    return 0;


}
