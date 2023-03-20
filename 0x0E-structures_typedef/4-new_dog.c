#include <stdlib.h>
#include "dog.h"

/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * contains a copy of the string given as a parameter.
  * @str: input array
  * Return: pointer to array
  */
char *_strdup(char *str)
{
	char *p;
	int i, size = 0;

	if (!str)
		return (0);
	while (str[size] != '\0')
	{
	size++;
	}
	p = malloc((size + 1) * sizeof(char));
	if (p == NULL)
	return (p);
	for (i = 0; i < size; i++)
	{
	p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}

/**
* new_dog - creates a new dog
* @name: name's dog
* @age: age's dog
* @owner: owner's dog
* Return: new dog pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	return (NULL);
	new->name = _strdup(name);
	if (new->name == 0)
	free(new);
	new->age = age;
	new->owner = _strdup(owner);
	if (new->owner == 0)
	{
		if (new->name != 0)
		free(new->name);
		free(new);
	}

	return (new);
}
