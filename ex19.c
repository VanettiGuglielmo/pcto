#include <stdio.h>

int main()
{
    int x;
    int y = 0;
    int z = 0;
    int k;
    while(y == 0)
{
    printf("digita il numero dei prezzi da aggiungere:");
    scanf("%d", &x);

    if( x>0) 
    {

     z =  z + x;
     if(z > 50)
     {
        k = (z * 5) * (85 / 100);
        printf(" il prezzo ammonta a :%d\n", k);
     }
     else
    {
     if ( x > 30)
     {

     k = z* 5 * 90/100;
     printf("il prezzo totale ammonta %d\n", k);
     }
    else 
    {

        k = z * 5;
        printf("il prezzo tot ammonta %d\n", k);
    }
    }
}
else 
{

y = y - 1;
printf(" hai inserito il numero negativo %d, quindi il programma si è stoppato \n", x);
}
}


    

}
   

