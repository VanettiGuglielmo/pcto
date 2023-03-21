#include <stdio.h>

int main()

{

int x;

printf("inserite l'anno: ");
scanf("%d", &x);
if((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
{
    printf("se l'anno è bisestile");
}
else
{
    printf("l'anno è bisestile");
}



}