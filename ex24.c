#include <stdio.h>

int main()
{
    
    int i;
    int b;

    printf("scegli un  numero:");
    scanf("%d",&b);
    while(i < b)
    {
        x[i] =i;
        printf("%d = %d\n", i, x[i]);
        i = i + 1; 
    }

}