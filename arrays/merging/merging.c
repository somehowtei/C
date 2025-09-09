#include <stdio.h>
int main()
{
    int n;
    int m;
    int p=0;
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
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=i+1; j<m; j++)
        {
            if(b[i]>b[j])
            {
                b[i]=b[i]^b[j];
                b[j]=b[i]^b[j];
                b[i]=b[i]^b[j];
            }
        }
    }
    int i=0;
    int j=0;
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
