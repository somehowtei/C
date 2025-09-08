int v[1000];
int n;
int x;
int p;
scanf("%d", &n);
for(int i=0; i<n; i++)
{
    scanf("%d", &v[i]);
}
for (int i=1; i<n; i++)
{
    x = v[i];
    p = i;
    while (p>=1 && v[p-1]>x)
    {
        v[p] = v[p-1];
        p--;
    }
    v[p] = x;
}
for (int i = 0; i < n; i++)
{
    printf("%d ", v[i]);
}
