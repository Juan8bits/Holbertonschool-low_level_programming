#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strcpy - copy strings
 * @dest: destiny string
 * @src: source string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i == '\0'; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
/**
 * _strlen - Return the length of a string
 * @s: string.
 * Return: z
 */

int _strlen(char *s)
{
	int z;

	while (s[z] != '\0')
		z++;
	return (z);
}
/**
 * new_dog - Functiont that creates a new dog
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner name of the dog
 * Return: Pointer to memmory allocation.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *copyname;
	char *copyowner;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	copyname = malloc(sizeof(char) * (_strlen(name) + 1));

	if (copyname == NULL)
	{
		free(newdog);
		return (NULL);
	}
	copyowner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (copyowner == NULL)
	{
		free(newdog);
		free(copyname);
		return (NULL);
	}
	_strcpy(copyname, name);
	_strcpy(copyowner, owner);
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
