# C Language
## Descriptors

![1_vZyQaiaCyLCedBdiYeYxfg](https://github.com/user-attachments/assets/bb345a8f-968b-4377-904f-c6a0bf5e25d2)

### Integer( %d or %i)
Integer defines a whole number
```
int a;
scanf("%d", &a);
```
### Unsigned Integer(%u)
Used to print unsigned decimal integers
```
unsigned int a;
scanf("%u", &a);
```
### Float(%f)

### Specific Notation(%e or %E)

### Unsigned Hexazecimal Integer(%x or %X)

### Characters(%c)

### String of Characters(%s)

### Octal(%o)

### Pointer(%p)

## Write/Read
### Write(method number 1):
```
printf("%d", n);
```
### Write(method number 2):
```
printf("This shows a specific number: %d with text", n);
```
### Read:
```
scanf("%d", &n);
```
## Algorithms
### Prime numbers
For 1 number:
```
#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    int c;
    scanf("%d", &x);
    if(x==0 || x==1)
    {
        c=1;
    }
    else
    {
        for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("This number is a prime number");
    }
    else
    {
        printf("This number is not a prime number");
    }
    return 0;
}
```
For an array:
```
#include <stdio.h>
#include <math.h>
int main()
{
    int v[1000];
    int c;
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }
    for(int i=0; i<n; i++)
    {
        c=0;
        if(v[i]<=1)
        {
            c=1;
        }
        for(int j=2; j<=sqrt(v[i]); j++)
        {
            if(v[i]%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d is prime\n", v[i]);
        }
        else
        {
            printf("%d is not prime\n", v[i]);
        }
    }
}
```
## Array
### Array Traversal

```
int v[n];
scanf("%d", &n);
for (int i=0; i<=n; i++)
{
    scanf("%d", &v[i]);
}
```
### Deleting/Inserting in Arrays
Deleting:
```
for(int i=x; i<n-1; i++)
{
    a[i]=a[i+1];
}
n--;
```
x defines the index of an element

Inserting:
```
for(int i=n-1; i>=x; i--)
{
    a[i+1]=a[i];
}
a[x]=8;
n++;
```
a[x]= is the value we insert 

### Sorting 
#### Bubble Sort
```
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
            v[i]=v[i]^v[i+1]
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
```
#### Insertion sort
```
int v[5] = {3,5,2,1,7};

int n = sizeof(v)/sizeof(int);

int x;
int p;
for (int i=1; i<n;i++)
{
    x = v[i];
    p = i-1;
    while (p>=0 && v[p]>x)
    {
        v[p+1] = v[p];
        p--;
    }
    v[p+1] = x;
}
for (int i = 0; i < n; i++)
{
    printf("%d", v[i]);
}
```
#### Selection sort
```
int v[100];
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
return 0;
```


