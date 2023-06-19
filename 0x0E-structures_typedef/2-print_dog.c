#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints all the vars in struct dog
 * @d: struct variable pointer
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL || d->age == NULL || d->owner == NULL)
		printf("(nil)");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
