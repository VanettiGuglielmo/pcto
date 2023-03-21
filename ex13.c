#include <stdio.h>

int main()

{
    int x;
    int y =0;
    int z =1;

    printf("ineserisciun numero:");
    scanf("%d", &x);

    while(y < x)
    {
        y = y + 1;
        z = z * y;

    }

    printf("%d!= %d\n", x, z);

}