#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees dogs
 *
 * @d: The parameter that points to the dog
 *
 * Description: This function aims to free given struct
 *
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
