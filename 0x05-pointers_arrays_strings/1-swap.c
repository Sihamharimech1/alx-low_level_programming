#include "main.h"
/**
* swap_int - swaps the value
* @a: first int
* @b: second int
* Return 0
*/
void swap_int(int *a, int *b)
{
		int tmp;

		tmp = *a;
		*a = *b;
		*b = tmp;
}
