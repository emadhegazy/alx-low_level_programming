#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, r = 0;
	char *bb;

	if (str == NULL)
		return (NULL);
	if (bb == NULL)
		return (Null);
	i = 0;

	while (str[i] != '\0')
		i++;
	bb = malloc(sizeof(char) * (i + 1));
	for (r = 0 ; str[r] ; r++)
		bb[r] = str[r];
	return (bb);
}
