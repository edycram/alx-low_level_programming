#include "main.h"

/**
 * swap_int - a function that swaps values of two integers
 * @a: param1
 * @b: param2
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int temp; /* temp is an extra integer used for swapping */

	temp = *a;
	*a = *b;
	*b = temp;
}
