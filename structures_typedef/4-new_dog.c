#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Function that creates a new dog
 *
 * @name: The parameter that represents name of the dog
 * @age: The parameter that represents age of the dog
 * @owner: The parameter that represents owner of the dog
 *
 * Description: This function aims to create a new dog with given variables
 *
 * Return: Returns dog, otherwise null
 *
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *dog;

	dog = malloc(sizeof(dog));

	if (dog == NULL)
		return (NULL);


	dog->name = malloc(sizeof(name) + 1);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(owner) + 1);

	if (dog->owner == NULL)
	{
		free(dog->name), free(dog);
		return (NULL);
	}

	for (i = 0; i < name[i]; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;

	for (i = 0; i < owner[i]; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
