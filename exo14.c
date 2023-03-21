#include <stdio.h>

int main()

{

    int x = 0; 
  while(x>=0 && x<=100) 
  {
   if(x%3==0 && x%5==0)
{
    printf("fizzbuzz");
}


else if(x%5==0)
{
    printf("buzz");

}

else if (x%3==0 )
{
    printf("fizz");
}
else
{
    printf("%d", x);
}
x++;
  }
}