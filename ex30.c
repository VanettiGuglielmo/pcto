#include <stdio.h>

void stampa(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }

}

int main()
{

    char *s = "ciaone";
    stampa (s);
}
