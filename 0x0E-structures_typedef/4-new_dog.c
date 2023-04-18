#include <stdlib.h>
#include "dog.h"
/**
 * length - returns the length of a string
 * @p: string to evaluate
 * Return: the length of the string
 */
int length(char *p)
{
	int a;

	a = 0;
	while (p[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * *copy - copies the string pointed to by befe
 * including the terminating null byte (\0) to 
 * the buffer pointed to by dest
 * @bef: pointer to the buffer in which we copy the string
 * @befe: string to be copied
 * Return: the pointer to dest
 */
char *copy(char *bef, char *befe)
{
	int a, b;

	a = 0;
	while (befe[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		bef[b] = befe[b];
	}
	bef[b] = '\0';
	return (bef);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int a, b;

	a = length(name);
	b = length(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (a + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (b + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	copy(dog->name, name);
	copy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
