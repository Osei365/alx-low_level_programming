#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates new dog in class dog_t
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: struct data type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *result;
	int l1, l2;

	l1 = strlen(name);
	l2 = strlen(owner);

	result = malloc(sizeof(dog_t));
	if (result == NULL)
	return (NULL);

	result->name = malloc(sizeof(char) * (l1 + 1));
	if (result->name != NULL)
	strcpy(result->name, name);
	else
	{
		free(result);
		return (NULL);
	}

	result->age = age;

	result->owner = malloc(sizeof(char) * (l2 + 1));
	if (result->owner != NULL)
		strcpy(result->owner, owner);
	else
	{
		free(result);
		free(result->name);
		return (NULL);
	}
	return (result);
}
