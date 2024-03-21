#include <stddef.h>
#include "dog.h"

/**
 * init_dog - Function that initialize a variable of type struct dog
 *
 * @d: The parameter that points to the dog
 * @name: The parameter that represents name of the dog
 * @age: The parameter that represents age of the dog
 * @owner: The parameter that represents owner of the dog
 *
 * Description: The function assigns these values to the respective fields of
 * the struct dog variable pointed to by the parameter d.
 *
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
