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
	int a, b, c, d;

	holder = malloc(sizeof(dog_t));
	if (holder == NULL)
		return (NULL);

	for (a = 0; name[a] != '\0'; a++)
		;

	for (b = 0; owner[b] != '\0'; b++)
		;

	holder->name = malloc(sizeof(char) * (a + 1));
	if (holder->name == NULL)
	{
		free(holder);
		return (NULL);
	}

	holder->owner = malloc(sizeof(char) + (b + 1));
	if (holder->owner == NULL)
	{
		free(holder->name);
		free(holder);
		return (NULL);
	}

	for (c = 0; c <= a; c++)
		holder->name[c] = name[c];
	holder->name[c] = '\0';

	holder->age = age;

	for (d = 0; d <= b; d++)
		holder->owner[d] = owner[d];
	holder->owner[d] = '\0';

	return (holder);
}
