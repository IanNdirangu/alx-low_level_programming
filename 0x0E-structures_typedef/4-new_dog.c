#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - this is a function that returns the length of a given string
 * @s: the string to examine
 *
 * Return: the string length
 */
int _strlen(char *s)
{
	int k;

	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	return (k);
}
/**
 * *_strcpy - this is a function that copies the string pointed to by src
 * including the terminating null byte (\0) to the buffer pointed to by dest
 *
 * @dest: the pointer to the buffer in which we copy the string
 * @src: the string to be copied
 *
 * Return: Returns the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x, k;

	x = 0;

	while (src[x] != '\0')
	{
		x++;
	}

	for (k = 0; k < x; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';

	return (dest);
}

/**
 * new_dog - this is a function that creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: On success, return a pointer to the new dog,
 * otherwise return NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int a, b;

	a = _strlen(name);
	b = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (a + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (b + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
