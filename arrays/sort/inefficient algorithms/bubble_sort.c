int v[100];
int n;
scanf("%d", &n)
bool sorted=false;
for(int i=0; i<n; i++)
{
    scanf("%d", &v[i]);
}
do
{
    sorted=true;
    for(int i=0; i<n-1; i++)
    {
        if(v[i+1]<v[i])
        {
            v[i]=v[i]^v[i+1];
            v[i+1]=v[i]^v[i+1];
            v[i]=v[i]^v[i+1];
            sorted=false;
        }
    }
}while(!sorted);
for(int i=0; i<n; i++)
{
    printf("%d", &v[i]);
}
return 0;
