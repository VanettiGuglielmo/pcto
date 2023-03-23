#include <stdio.h>
int main()
{
    int x,y;
    printf("inserisci le cordinate x y");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("x: %d\n", x);
    printf("y: %d\n", y); 

    if (y>0 && x>0)
    {
      printf("si trova nel primo quadrante");   
    }
    else if(y>0 && x<0)
    {
      printf ("si trova nel secondo quadrante");
    }
    else if (y<0 && x<0)
    {
      printf ("si trova nel terzo quadrante");
    }
    else if (y==0 && x!=0)
    {
        printf ("si trova sull0asse delle y");
    }
    else if (y!=0 && x==0)
    {
        printf (" si trova sull'asse delle x");
    }
    else if ( y==0 && x==0)
    {
        printf (" passa per l'origine");
    }
    else 
    {
        printf ("si trova nel quarto quadrante");
    }
}

   
