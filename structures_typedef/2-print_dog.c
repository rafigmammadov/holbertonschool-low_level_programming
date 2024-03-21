#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Function that prints a struct dog
 *
 * @d: The parameter that points to the dog
 *
 * Description: Function takes data from struct dog and prints it
 *
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name)
			printf("Name: %s\n", (d->name));
		else
			printf("Name: (nil)\n");
		if ((*d).age >= 0)
			printf("Age: %f\n", (d->age));
		else
			printf("Age: (nil)\n");
		if ((*d).owner)
			printf("Owner: %s\n", (d->owner));
		else
			printf("Owner: (nil)\n");
	}
}


