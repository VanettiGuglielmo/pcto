#include <stdio.h>

int main()

{

    int x;
    x = 1; 
  while(x<=100) 
  {
   if(x%3==0 && x%5==0)
{
    printf("fizzbuzz\n");
}


else if(x%5==0)
{
    printf("buzz\n");

}

else if (x%3==0 )
{
    printf("fizz\n");
}

else 
{
    printf("%d\n", x);
}
x = x+1;
  }
}