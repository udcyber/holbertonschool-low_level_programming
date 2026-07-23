#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog memory
 * @d: struct dog
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
