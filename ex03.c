#include <stdio.h>

int main()

{
    int a;
    int b;

 printf("inserisci un numero:");
 scanf("%d",&a);
printf("inserisci un numero:");
scanf("%d",&b);
int somma = a + b;
int differenza = a - b;
int prodotto = a * b;
int quoziente = a / b;
int resto = a % b; 

printf("somma: %d, differenza: %d, prodotto: %d, quoziente: %d, resto: %d\n", somma, differenza, prodotto, quoziente, resto); 


}