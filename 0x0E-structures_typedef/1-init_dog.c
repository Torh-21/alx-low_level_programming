#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: struct argument
 * @name: character agument
 * @age: float argument
 * @owner: character argument
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
