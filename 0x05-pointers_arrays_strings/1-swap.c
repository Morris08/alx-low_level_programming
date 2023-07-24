#include "main.h"
/**
 * swap_int - interchanges value
 * @a: number1
 * @b: number2
 *
 * return zero
 */

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
return;
}
