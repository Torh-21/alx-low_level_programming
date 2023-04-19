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
	int a, b;

	holder = malloc(sizeof(dog_t));

	if (holder == NULL)
		return (NULL);

	holder->name = malloc(sizeof(name) + 1);

	if (holder->name == NULL)
	{
		free(holder);
		return (NULL);
	}

	holder->owner = malloc(sizeof(owner) + 1);

	if (holder->owner == NULL)
	{
		free(holder->name);
		free(holder);
		return (NULL);
	}

	for (a = 0; name[a] != '\0'; a++)
		holder->name[a] = name[a];
	holder->name[a] = '\0';

	holder->age = age;

	for (b = 0; name[b] != '\0'; b++)
		holder->owner[b] = owner[b];
	holder->owner[b] = '\0';

	return (holder);
}
