#include <stdio.h>

int main()

{

float x;
float y;
float z; 

printf("inserire un anno");
scanf("%f", &x);
    if(x< 1969)
    {
        y=x+1969;
        printf("sei nato prima dello sbarco\n");
    }
    else if(x> 1969)
    {
        y=x-1969;
        printf("nato dopo lo  sbarco");
    }
    else
    {
        printf(" sei nato nell'anno dello sbarco");
    }

}
