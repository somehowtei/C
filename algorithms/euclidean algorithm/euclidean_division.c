#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    int r;
    if(n>m)
    {
        while(m!=0)
        {
            r=n%m;
            n=m;
            m=r;
        }
        printf("%d", n);
    }
    else
    {
        while(n!=0)
        {
            r=m%n;
            m=n;
            n=r;
        }
        printf("%d", m);
    }
}
