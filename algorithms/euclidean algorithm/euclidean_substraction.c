#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    while(n!=m)
    {
        if(n>m)
        {
            n=n-m;
        }
        else
        {
            m=m-n;
        }
    }
    printf("%d", n); 
    return 0;
}
//if the consol returns 1 it means the numers are prime to each other
