#include <stdio.h>
void cifminmax(int x, int *max, int *min)
{
    *min=10;
    *max=-1;
    while(x>0)
    {
        if(x%10<*min)
        {
            *min=x%10;
        }
        if(x%10>*max)
        {
            *max=x%10;
        }
        x=x/10;
    }
}
int main()
{
    int n;
    int min;
    int max;
    scanf("%d", &n);
    cifminmax(n,&max,&min);
    printf("%d %d", max, min);
    return 0;
}
