#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: 0 or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, len;
	dog_t *dog2;

	for (a = 0; name[a] != '\0'; a++)
	{
		;
	}
	a++;
	for (b = 0; owner[b] != '\0'; b++)
	{
		;
	}
	b++;

	dog2 = malloc(sizeof(dog_t));
	if (dog2 == 0)
	{
		free(dog2);
		return (NULL);
	}
	dog2->name = malloc(sizeof(dog2->name) * a);
	if (dog2->name == 0)
	{
		free(dog2->name);
		free(dog2);
		return (NULL);
	}
	for (len = 0; len < a; len++)
	{
		dog2->name[len] = name[len];
	}
	dog2->name[len] = name[len];

	dog2->age = age;

	dog2->owner = malloc(sizeof(dog2->owner) * b);
	if (dog2->owner == 0)
	{
		free(dog2->owner);
		free(dog2->name);
		free(dog2);
		return (NULL);
	}
	for (len = 0; len < b; len++)
	{
		dog2->owner[len] = owner[len];
	}
	dog2->owner[len] = owner[len];

	return (dog2);
}
