#include <iostream>
using namespace std;
void cifminmax(int x, int &max, int &min)
{
    min=10;
    max=-1;
    while(x>0)
    {
        if(x%10<min)
        {
            min=x%10;
        }
        if(x%10>max)
        {
            max=x%10;
        }
        x=x/10;
    }
}
int main()
{
    int n;
    int min;
    int max;
    cin>>n;
    cifminmax(n,max,min);
    cout<<max<<" "<<min;
}
