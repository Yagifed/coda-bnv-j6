#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "revert_words.h"

void revert_words(char *str)
{
    int i = 0;
    int j = 0;
    int start = 0;
    int end = 0;

    int len = strlen(str);
    end = len - 1;

    for (i = len-1; i >= 0; i--)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == 39 || i == 0)
        {
            if (i == 0)
            {
                start = 0;
            }
            else
            {
                start = i + 1;
            }
            for (j = start; j <= end; j++)
            {
                printf("%c", str[j]);
            }
            end = i - 1;
            printf(" ");
        }
    }
    printf("\n");
}