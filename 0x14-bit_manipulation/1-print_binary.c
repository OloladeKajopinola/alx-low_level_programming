#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	/* Create a mask ith only the most significant bit set */
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	/* To track leading zeros */
	int flag = 0;

	/* If n is 0, directly print 0 and return */
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* Iterate through each bit from MSB  to LSB */
	while (mask != 0)
	{
		/* Check if the current bit is set (1) or not (0) */
		if ((n & mask) != 0)
		{
			_putchar('1');
			/* Mark that non-zero bit is found */
			flag = 1;
		}
		else if (flag == 1)
			/* Print leading zeros after the first non-zero bit */
			_putchar('0');
		/* Move to the next bit */
		mask = mask >> 1;
	}
}
