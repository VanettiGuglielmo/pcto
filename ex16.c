#include <stdio.h>

int main()

{
    int x;
    int y =0;
    int z =0;

    printf("ineserisciun numero:");
    scanf("%d", &x);

    while(y < x)
    {
        printf("inserisci un numero:");
    scanf("%d", &x);
        y = y + 1;
        z = z * y;

    }

printf("la somma di tutti i numeri che hai inserito è: %d\n", z);