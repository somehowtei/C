#include <stdio.h>
#include <math.h>
int main()
{
    int v[1000];
    int c;
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }
    for(int i=0; i<n; i++)
    {
        c=0;
        if(v[i]<=1)
        {
            c=1;
        }
        for(int j=2; j<=sqrt(v[i]); j++)
        {
            if(v[i]%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d is prime\n", v[i]);
        }
        else
        {
            printf("%d is not prime\n", v[i]);
        }
    }
}
