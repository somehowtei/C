//for a and b already sorted
#include <stdio.h>
int main()
{
    int n;
    int m;
    int a[1000];
    int b[1000];
    int c[2000];
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<m; i++)
    {
        scanf("%d", &b[i]);
    }
    int i=0;
    int j=0;
    int p=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[p]=a[i];
            p++;
            i++;
        }
        else
        {
            c[p]=b[j];
            p++;
            j++;
        }
    }
    while(i<n)
    {
        c[p]=a[i];
        p++;
        i++;
    }
    while(j<m)
    {
        c[p]=b[j];
        p++;
        j++;
    }
    for(int i=0; i<p; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}
