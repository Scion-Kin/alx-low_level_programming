#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;

	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	new_dog->name = malloc((i + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';
	for (j = 0; owner[j] != '\0'; j++)
		;
	new_dog->owner = malloc((j + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (j = 0; owner[j] != '\0'; j++)
		new_dog->owner[j] = owner[j];
	new_dog->owner[j] = '\0';
	new_dog->age = age;
	return (new_dog);
}
