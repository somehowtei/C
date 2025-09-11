//longest subarray with only odd numbers
#include <stdio.h>
int main()
{
    int n;
    int a[1000];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int smax=1;
    int dmax=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==1)
        {
            int j=i;
            while(j+1<n && a[j+1]%2==1)
            {
                j++;
            }
            if(j-i+1>dmax-smax+1)
            {
                smax=i;
                dmax=j;
            }
            i=j;
        }
    }
    for(int i=smax; i<=dmax; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
