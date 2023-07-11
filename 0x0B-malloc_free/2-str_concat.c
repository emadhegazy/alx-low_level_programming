#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, ai;

	if (si == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	i = 0;
	ai = 0;
	while (si[i] != '\0')
	i++;
	while (s2[ai] != '\0')
	ai++;
	concat = malloc(sizeof(char) * (i + ai + 1));
	if (concat == NULL)
	return (NULL);
	i = 0;
	ai = 0;
	while (si[i] != '\0')
	{
	concat[i] = s1[i];
	i++;
	}
	while (s2[ai] != '\0')
	{
	concat[i] = s2[ai];
	i++;
	ai++;
	}
	concat[i] = '\0';
	return (concat);
}
