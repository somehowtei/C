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

### Integer( %d or %i)
Integer defines a whole number
```
int a;
scanf("%d", &a);
```
### Float(%f)
```
float a;
scanf("%f", &a);
```
### Characters(%c)
```
char a;
scanf("%c", &a);
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

