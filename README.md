# C Language



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



## Data Types

![1_vZyQaiaCyLCedBdiYeYxfg](https://github.com/user-attachments/assets/bb345a8f-968b-4377-904f-c6a0bf5e25d2)
```
35e3= 35*10^3
35E4=35*10^4
```
### Integer( %d or %i)
Integer defines a whole number
```
int a;
scanf("%d", &a);
```
### Float(%f)
can store 7 decimal digits
```
float a;
scanf("%f", &a);
```
```
float a=2.4;
printf("%f", a); // only show 6 digits
printf("%.2f", a) // only show 2 digits
printf("%.4f", a) // only show 4 digits
```
### Double(%lf)
can store 15 decimal digits
```
double a;
scanf("%lf", &a);
```
### Characters(%c)
```
char a='A';
printf("%c", a);
```
or
```
char a=65;
printf("%c",a);
```
### String(%s)
```
char text[]="Hello";
printf("%s", text);
```
## Files
```
FILE *fin, *fout;
```
Opening files input and output:
```
fin=fopen("input.txt", "r");
fout=fopen("output.txt", "w");
```
Using fscanf and fprintf instead of scanf and printf:
```
fscanf (fin, "d", &n);
fprintf(fout, "d", n);
```
Closing the files:
```
fclose(fin);
fclose(fout);
```



## Library
### Stdio.h

### Stdlib.h
#### Qsort
Quick sort function
```
void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void *));
```
> * base = the adress of the first array(ex:v)
> 
> * nitems = the number of elements
> 
> * size = the size of an element(ex:sizeof(int)
> 
> * compar = function that compares 2 elements 

Example:
```
#include <stdio.h>
#include <stdlib.h>

int compareAsc(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int v[] = {4, 2, 7, 1};
    int n = sizeof(v) / sizeof(v[0]);

    qsort(v, n, sizeof(int), compareAsc);

    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    return 0;
}
```
> * const void* a = the adress of an array
> 
> * (int*)a = converting to int
> 
> * steluța(int*)a = dereferencing: accesing the value stored at that adress
### Math.h

### String.h

