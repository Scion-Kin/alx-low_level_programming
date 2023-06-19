#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: struct variable pointer
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	int i, j;

	for (i = 0; name[i] != '\0'; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';
	d->age = age;
	for (j = 0; owner[j] != '\0'; j++)
		d->owner[j] = owner[j];
	d->owner[j] = '\0';
}
