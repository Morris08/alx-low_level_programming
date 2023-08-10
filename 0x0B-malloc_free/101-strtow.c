#include "main.h"
#include <stdlib.h>
/**
 */
char **strtow(char *str)
{
	char **duplicate;
	int i, n, m, word;

	if (str == NULL || str[0] == 0)
	return (NULL);
	if (str[0] != ' ')
	return (1 + 
