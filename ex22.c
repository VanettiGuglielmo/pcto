#include <stdio.h>

int check (int n)
{
if(n > 64 && n < 91)
{
n = n + 32;
}
else
{
    if(n > 96 && n < 123)
    {
        n = n - 32;
    }
    else
    {
        n = 0;
    }
}
return (n);
}
int main()
{
char x;
printf("Scegli una lettera: ");
scanf("%c", &x);
char p = check (x);
if(p == 0)
{
    printf("Errore: il carattere sellezionato non è una lettera.\n");
}
else
{
    printf("%c\n", p);
}
}