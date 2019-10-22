#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - Return the length of a string
 * @s: string
 * Return: string length i
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s)
	{
		counter++;
		s++;
	}
	return (counter);
}
/**
 * _strcpy - copy a string to a new destination
 * @dest: destination of copied string
 * @src: string to copy
 * Return: Pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name2, *owner2;
	int name2len, owner2len = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	name2len = _strlen(name);
	name2 = malloc(sizeof(char) * (name2len + 1));
	if (name2 == NULL)
		return (NULL);
	_strcpy(name2, name);

	owner2len = _strlen(owner);
	owner2 = malloc(sizeof(char) * (owner2len + 1));
	if (owner2 == NULL)
		return (NULL);

	_strcpy(owner2, owner);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
