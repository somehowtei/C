# C Algorithms
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
This is one of the least efficient sorting algorithm
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
        if(v[i+1]<v[i]
        {
            
        }
    }

}





```



