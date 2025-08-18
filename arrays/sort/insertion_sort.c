int v[5] = {3,5,2,1,7};

int n = sizeof(v)/sizeof(int);

int x;
int p;
for (int i=1; i<n;i++)
{
    x = v[i];
    p = i-1;
    while (p>=0 && v[p]>x)
    {
        v[p+1] = v[p];
        p--;
    }
    v[p+1] = x;
}
for (int i = 0; i < n; i++)
{
    printf("%d", v[i]);
}
