#include <stdio.h>
int sumcif(int a)
{
  int x;
  int sum=0;
  do
  {
    x=a%10;
    sum=sum+x;
    a=a/10;
  }while(a>0)
  return sum;
}
int main()
{
  int a;
  int suma=sumcif(a);
  printf("%d", suma);
}
