#include main.h

/**
 *
 * swap_int - swap the values of two integers
 *
 * @n: int a
 *
 * @n: int b
 *
 */
void swap_int(int *a, int *b)
{
		int q;

		q = *a;
		
		*a = *b;

		*b = q; 
}
