#include "dog.h"
#include <stdlib.h>
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

	result = malloc(sizeof(dog_t));
	if (result == NULL)
	return (NULL);
	result->name = name;
	result->age = age;
	result->owner = owner;
	return (result);
}
