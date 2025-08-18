#include <stdio.h>
int main()
{
     int n;
     scanf("%d", &n);
     int a=1;
     int b=1;
     int c;
     printf("%d %d ", a, b);
     for(int i=3; i<=n; i++)
     {
          c=a+b;
          a=b;
          b=c;
          printf("%d ", c);
     }
     return 0;
}
