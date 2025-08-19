void sumcif(int a)
{
  int x;
  int sum=0;
  do
  {
    x=a%10;
    sum=sum+x;
    a=a/10;
  }while(a>0)
  printf("%d", sum);
}
int main()
{
  int a;
  scanf("%d", &a);
  sumcif(a);
}
