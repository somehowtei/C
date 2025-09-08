int v[1000];
int n;
scanf("%d", &n)
for(int i=0; i<n; i++)
{
    scanf("%d", &v[i]);
}
for(int i=0; i<n; i++)
{
    for(int j=i+1; j<n; j++)
    {
        if(v[i]>v[j])
        {
            v[i]=v[i]^v[j];
            v[j]=v[i]^v[j];
            v[i]=v[i]^v[j];
        }
    }
}
for(int i=0; i<n; i++)
{
    printf("%d", v[i]);
}
