#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    int c;
    scanf("%d", &x);
    if(x==0 || x==1)
    {
        c=1;
    }
    else
    {
        for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("This number is a prime number");
    }
    else
    {
        printf("This number is not a prime number");
    }
    return 0;
}
