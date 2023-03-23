#include <stdio.h>

int nome(char *a)
{

    int  i = 0;
    while(a[i] != 0)
    {
        i = i + 1;

    }
     return(i);
}

int main()

{
    int i = 0;
    char a[] = "parola";
    char b[] = "parolone";
    i = nome(a);
    printf("la parola %s è fatta da %d lettere", a, i);
    i = nome(b);
    printf("la parola %s è fatta da %d lettere", a, i);
}