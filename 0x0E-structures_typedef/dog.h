#ifndef DOG
#define DOG

/**
 * struct dog - a struct type containing re-usable arguments
 *
 * @name: character argument
 * @age: float argument
 * @owner: character argument
 *
 * Description: A struct named dog which holds three
 * arguments of different types
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG */
