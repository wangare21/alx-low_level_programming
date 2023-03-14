#include "main.h"

/**
 * create_array - a function that creates an array of char
 * @size: number of elements array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
	return (NULL);
	}
	/*Defines value with malloc*/
	buffer = (char *) malloc(size * sizeof(c));
	if (buffer == 0)
	{
	return (NULL);
	}
	else
	{
	position = 0;
	while (position < size) /*While for array*/
	{
	*(buffer + position) = c;
	position++;
	}
	return (buffer);
	}
}
