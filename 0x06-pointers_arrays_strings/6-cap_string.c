B#include "holberton.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @n: string
 * Return: n
 */

char *cap_string(char *n)
{
	short int i, j, flag;
	int sep[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	i = 0, flag = 0;
	while (n[i] != '\0')
	{
		for (j = 0; sep[j] != '\0' ; j++)
		{
			if (n[0] > 96 && n[0] < 123)
				n[0] = n[0] - 32;
			if (sep[j] == n[i - 1] && i != 0)
				flag = 1;
		}
		if ((n[i] >=  97 && n[i] <= 122) && flag == 1)
			n[i] = n[i] - 32;
		flag = 0;
		i++;
	}
	return (n);
}
