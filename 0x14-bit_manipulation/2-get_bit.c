#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the ebid, starting from 0.
 *
 * Return: The value of the bit at the given index or -1 if n error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Declare the mask variable*/
	unsigned long int mask;

	/* Chech if the index is out of the range of bits in the number*/
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/* Create a mask wwith 1 at the given index */
	mask = 1UL << index;
	/* Check if the bit the given index is set (1) or not (0) */
	if ((n & mask) != 0)
		return (1);
	else
		return (0);
}
