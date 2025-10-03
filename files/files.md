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
fscanf (fin, "%d", &n);
fprintf(fout, "%d", n);
```
Closing the files:
```
fclose(fin);
fclose(fout);
return 0;
```

