#include <stdio.h>

int main()
{
    float x;
    float F; 
    float K;

    printf("inserisci la temperatura in C");
    scanf("%f", &x);
    if(x < -273.15)
    {
        printf("error\n");
    }
    else
    {
        F = (9/5) * x + 32;
        K = x + 273.15;
        printf("la temperatura in F: %f e quella in K: %f\n", F, K);
    }
}
