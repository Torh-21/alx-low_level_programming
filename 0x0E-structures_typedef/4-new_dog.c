#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 *
 * @name: character argument
 * @age: float argument
 * @owner: character argument
 *
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *holder;

	holder = malloc(sizeof(dog_t));
	if (holder == NULL)
	{
		return (NULL);
	}

	holder->name = name;
	holder->age = age;
	holder->owner = owner;

	return (holder);
}
