#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - The structure that represents dog
 *
 * @name: The parameter that represents name of the dog
 * @age: The parameter that represents age of the dog
 * @owner: The parameter that represents owner of the dog
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
