# C Language
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

