#include <stdbool.h>  //specific header file
int main()
{
  bool a=true;
  bool b=false;
  
  printf("%d", a); // return true(1)
  printf("%d", b); // return false(0)
}


//example
#include <stdbool.h>
int main()
{
  int a=10;
  int b=5;
  
  printf("%d", a>b); //return true(1)
}

//example
#include <stdbool.h>
int main()
{
  bool Hello=true;
  bool Hi=true;

  printf("%d", Hello==Hi); //return true(1)
}
