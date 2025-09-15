void qsort(
    void *base,      // adresa de început a tabloului
    size_t nitems,   // câte elemente are tabloul
    size_t size,     // dimensiunea fiecărui element, în bytes
    int (*compar)(const void *, const void *)
);
/*
base – pointer către primul element al tabloului (de exemplu a dacă ai int a[1000]).

nitems – numărul de elemente din tablou (n).

size – dimensiunea fiecărui element (pentru int, sizeof(int)).

compar – adresa unei funcții care compară două elemente.
*/
int cmp_int(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

qsort(a, n, sizeof(int), cmp_int);
