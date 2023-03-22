#include <stdio.h>

int main()

{
    int x;
    int y;
    float z =0;
    float k;
    float j = 0;

    while(y == 0)
    {
        
    }


    printf("ineserisciun numero:"); 
    scanf("%d", &x);

    if(x >= 0)
{


    z = z + x; 
    j = j + 1;
    k = z / j;
    printf("la media dei numeri scritti fino ad ora è: %f\n", k);
}
    
    else 
    {
        y = y - 1;
        printf("hai inserito il numero negativo %d, quindi il programma si è fermato\n", x);
        

    }


}