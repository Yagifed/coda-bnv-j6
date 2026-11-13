#include <stdio.h>
#include <stdlib.h>
#include "sort_numbers.h"

void print_tab(int *numbers)
{
    int i = 0;
    int len = 5;

    for (i = 0; i < len; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

void sort_numbers_asc(int *numbers, int len)
{
    int i = 0, j = 0, temp = 0;

    for (i = 0; i < (len - 1); i++)
    {
        for (j = 0; j < (len - i - 1); j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }

        }
    }print_tab(numbers);
    
}
