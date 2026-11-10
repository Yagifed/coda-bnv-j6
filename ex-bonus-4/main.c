#include <stdlib.h>
#include "sort_numbers.h"

int main()
{
    int numbers1[] = {5, -6, 29, 34, 0};
    int numbers2[] = {45, -128, 496, 11, -90};

	sort_numbers_asc(numbers1, 5);
	sort_numbers_asc(numbers2, 5);
	exit(0);
}