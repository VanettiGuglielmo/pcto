#include <stdio.h>

int nome(a)
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
    
    int f;
    int i = 0;
    char a[] = "parola";
    while(a[i] != 0)
    {
        i = i + 1;
    }

    printf("la parola %s è fatta da %d lettere", a, i);

}