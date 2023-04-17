#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - return the lenth of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;
	
	i = 0;
	
	if (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copies a string
 * @dest: buffer in to which string is copied
 * @str: string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;
	
	i = 0;
	l = 0;

	if (src[l] != '\0')
	{
		l++;
	}

	for (; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog, NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (l2 + 1));
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
