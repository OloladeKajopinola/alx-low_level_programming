#include "main.h"

/**
 * set_bit - a function that sets the value of a bit o 1 at a given index.
 * @n: Pointer to the number in which the bit is to be set.
 * @index: index of the bit from 0.
 *
 * Return: 1 if it worked,or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Declare the mask variable*/
	unsigned long int mask;

	/* Check if the index is out of the range of bits in the number*/
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/* Create a mask with 1 at the given index */
	mask = 1UL << index;

	/* Set the bit at the given index to 1 using bitwise OR (|) */
	*n |= mask;
	/* Return 1 to indicae the successful operation */
	return (1);
}
