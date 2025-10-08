```
#include <iostream>
using namespace std;
int myFunc(int x)
{
  int r;
  if(condition)
  {
    return 0;
  }
  else
  {
    return myFunc;
    // or return r;
    //or return r+myFunc;
  }
}
int main()
{
  int n;
  cin>>n;
  cout<<myFunc(n);
  return;
}
```
