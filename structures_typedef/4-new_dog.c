#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, len_name, len_owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	len_name = 0;
	while (name && name[len_name])
		len_name++;

	d->name = malloc(len_name + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	len_owner = 0;
	while (owner && owner[len_owner])
		len_owner++;

	d->owner = malloc(len_owner + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (i = 0; i < len_owner; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';

	d->age = age;
	return (d);
}
