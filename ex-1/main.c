#include <stdlib.h>
#include <stdio.h>

int str_len(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

int main()
{
    int longueur = str_len("Bonjour");
    printf("Longueur de la chaîne 'Bonjour': %d\n", longueur);
	exit(0);
}