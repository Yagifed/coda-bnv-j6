#include <stdio.h>
#include <stdlib.h>
#include "count_words.h"

int count_words(char *str)
{
    int i = 0;
    int count = 0;
    while (str[i] != '\0') 
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == 39) 
        {
            count++;
        }
    i++;
    }
    return count + 1;
}