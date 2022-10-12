#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
 * @name: its name
 * @age: its age
 * @owner: its owner
 * Return: new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *jackie_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		jackie_dog = malloc(sizeof(dog_t));

		if (jackie_dog == NULL)
			return (NULL);

		jackie_dog->name = malloc(sizeof(char) * name_l);

		if (jackie_dog->name == NULL)
		{
			free(jackie_dog);
			return (NULL);
		}

		jackie_dog->owner = malloc(sizeof(char) * own_l);

		if (jackie_dog->owner == NULL)
		{
			free(jackie_dog->name);
			free(jackie_dog);
			return (NULL);
		}

		jackie_dog->name = _strcpy(jackie_dog->name, name);
		jackie_dog->owner = _strcpy(jackie_dog->owner, owner);
		jackie_dog->age = age;
	}

	return (jackie_dog);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
