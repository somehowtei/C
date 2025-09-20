//if y[] is subarray for x[]
#include <stdio.h>
int main()
{
    int i;
    int j;
    int x[1000];
    int n;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
    }
    int y[1000];
    int m;
    int poz=-1;
    scanf("%d", &m);
    for(i=0; i<m; i++)
    {
        scanf("%d", &y[i]);
    }
    for(i=0; i<=n-m; i++)
    {
        for(j=0; j<m; j++)
        {
            if(x[i+j]!=y[j])
            {
                break;
            }
        }
        if(j==m)
        {
            poz=i;
            break;
        }
    }
    if(poz==-1)
    {
        printf("NU");
    }
    else
    {
        printf("%d", poz+1);
    }
    return 0;
}
