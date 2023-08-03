#include <stdio.h>

/**
 * binary_to_unit- Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 and NULL for invalid(s)
 */
unsigned int binary_to_uint(const char *b)
{
	/* Initialize the result */
	unsigned int result = 0;
	/* Initialize the iterator for the input string */
	int i = 0;

	if (b == NULL)
	{
		/* Return 0 if the input string is NULL */
		return (0);
	}
	/* Iterate through the characters of the input string */
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			/* Return 0 if there is an invalid character */
			return (0);
		}
		/* Left shift the result and add the current bit ((b[i])*/
		result = (result << 1) | (b[i] - '0');
	       /* move to next character in  input string*/
		i++;
	}
	/* Return the converted binary to unsigned int*/
	return (result);
}
