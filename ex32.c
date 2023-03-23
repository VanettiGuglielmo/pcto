#include <stdio.h>

void numero(int n)
{

    if(n < 0)
    {
        printf("negativo\n");

    }
    else
    {
        printf("positivo\n");
    }

}


int main()

{
    int x = 1;
    while( x !=0)
    {
        printf("scegli un numero:");
        scanf("%d", &x);
        if(x!= 0)
        {
            numero(x);
        }
        else
        {
            printf("errore\n");
        }

    }

}