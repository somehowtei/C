#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    int r;
    while(m!=0)
    {
        r=n%m;
        n=m;
        m=r;
    }
        printf("%d", n);
}
